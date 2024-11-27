#include <stdarg.h> /* to use variadic arguments */
#include <stdio.h> /* to test with real printf */
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
	print_function fucntion_search[] = {
	{'c', print_char},  /* Prints a char */
	{'s', print_string},  /* Prints a string */
	{'%', print_percent}, /* Prints a percent */
	{'\0', NULL}
	};
	int j = 0; /*Declare and initialize j*/
	int count = 0;

	while (fucntion_search[j].type != '\0')
	{
		if (letter == fucntion_search[j].type)
		{  /* call associated function */
			count += fucntion_search[j].func(args) - 2;
			break; /* Exit loop after finding match */
		}
		j++; /* increment J for while loop */
	}
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
			count_function = (format[cursor + 1], args);
			cursor = cursor + 2;  /* update cursor to skip ''%X' */
			p_cursor = cursor;  /* update p_cursor */
		}
	else
	{
		cursor++;
	}
	}
	/* if cursor found last character */
	if (format[cursor] == '\0')
	{  /* display the rest */
	write(1, &format[p_cursor], (cursor - p_cursor));
	}
	va_end(args); /* Ends the use of the list */
	return (cursor + count_function); /*Return count of format + count char add*/
	}
