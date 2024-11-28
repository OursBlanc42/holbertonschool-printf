#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>


/**
 * print_string - print a string
 * @args: arg receive for print the string
 * Return: The length of the printed string
 */
int print_string(va_list args)
{
	/* Declare and initialize variable */
	int counter = 0;
	/* catch the string in a pointer */
	char *str = va_arg(args, char *);

	if (str == NULL)
	{
		/* Replace NULL with “(null)”. */
		str = "(null)";
	}
	/* loop char by char */
	while (str[counter] != '\0')
	{	/* display each char */
		write(1, &str[counter], 1);
		counter++;
	}
	return (counter);
}

/**
 * print_char - print a char
 * @args: arg receive for print the char
 * Return: The length of the char (= 1)
 */
int print_char(va_list args)
{
	/* declare and initialize variable */
	char c;
	/* char arguments are promoted to int in variadic function */
	/* so va_arg must use int to retrieve them. */
	/* declare C as a conversion of va_args int () */
	c = (char)va_arg(args, int);
	write(1, &c, 1); /* write the char */
	return (1); /* return length of one char */
}

/**
 * print_percent - print a percent symbol (%)
 * @args: arg recieved but not used (same structure than other functions)
 * Return: The length of the symbol percent (%) (= 1)
 */
int print_percent(va_list args)
{
	(void)(args);	/*because no args used*/
	write(1, "%", 1);	/*write the percent*/
	return (1);	/*return lenght of one char*/
}
