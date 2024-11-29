#include <stdarg.h> /* to use variadic arguments */
#include <unistd.h> /* to use write function*/
#include <stdlib.h> /* malloc et free */
#include "main.h" /*prototype of function*/

/**
 * comp_char - function to compare letter with array
 *@letter: letter for comparaison
 *@args: arguments for function
 *Return: the lenght of print
 */
int comp_char(char letter, va_list args)
{
  /*Array of structure associate a type with the corresponding func*/
	print_function function_search[] = {
	{'c', print_char},  /* Prints a char */
	{'s', print_string},  /* Prints a string */
	{'%', print_percent}, /* Prints a percent */
	{'i', print_integer}, /* Prints a integer (i key letter) */
	{'d', print_integer}, /* Prints a integer (d key letter) */
	{'\0', NULL}
	};
	int j = 0; /*Declare and initialize j*/
	int count = 0;

	if (letter == '\0')
	{
		return (-1);
	}
	while (function_search[j].type != '\0')
	{
		if (letter == function_search[j].type)
		{  /* call associated function */
			/* -2 to consider the %X we don't actually write*/
			count += function_search[j].func(args);
			break; /* Exit loop after finding match */
		}
		j++; /* increment J for while loop */
	}
	if (function_search[j].type == '\0')
	{
		write(1, "%", 1);
		write(1, &letter, 1);
	}
	return (count);
}

/**
 * _printf - Emulate printf function
 * Description : _printf display string with specified format (see exemple)
 * @format: list of types of arguments passed to the function
 * Exemple : _printf("The first letter of alphabet is : %c", 'A');
 * Output : 'The first letter of alphabet is A'
 * Return: number of character printed
 */
int _printf(const char *format, ...)
{
	/* Variable declaration and initialisation */
	unsigned int cursor = 0;
	unsigned int p_cursor = 0;
	int count_function = 0;
	int verif_error = 0;
	va_list args; /* Arguments list declaration */

	va_start(args, format); /* Initialize list with fixed arguments */

  /* Loop through format until end */
	while (format[cursor] != '\0')
	{
		if (format[cursor] == '%')  /* if cursor found a ''%'' */
		{
			/* if % is detected : print until cursor */
			write(1, &format[p_cursor], (cursor - p_cursor));
			/* check if followed character is on the type list */
			verif_error = comp_char(format[cursor + 1], args);
			if (verif_error < 0)
			{
				return (-1);
			}
			else
			{
				count_function += verif_error - 2;
			}
			cursor = cursor + 2;  /* update cursor to skip ''%X' */
			p_cursor = cursor;  /* update p_cursor */
		}
		else
		{
			cursor++;
		}
	}
	if (format[cursor] == '\0')	/* if cursor found last character */
	{  /* display the rest */
		write(1, &format[p_cursor], (cursor - p_cursor));
	}
	va_end(args); /* Ends the use of the list */
	return (cursor + count_function); /*Return count of format + count char add*/
}
