#include "main.h"
#include <stdlib.h>
#include <unistd.h>


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


/**
 * print_integer - print a integer
 * Description: Takes an integer from a variadic list converts it to a string
 * by decomposing it digit by digit, stores each digit in a character array,
 * and prints the array in reverse order to correctly display the integer.
 * @args: arg receive for print the string
 * Return: The length of the printed string
 */

int print_integer(va_list args)
{	/* define and initialize variable */
	int i = 0, counter = 0, src_integer = 0, last_digit = 0;
	int check_negative = 0; /* 0 = positive , 1 = negative */
	char str[19];	/* Size for 19 digits (max nb length on 64 bit system) */

	src_integer = va_arg(args, int); /* retrieve variable */

	/* check if src_integer is negative and keep the result in a "boolean" */
	if (src_integer < 0)
		check_negative = 1;

	if (src_integer == 0) /* Check special case */
	{ /* if input = 0 dont loop through all the number and just display 0 */
		str[i] = 0 + '0'; /* convert zero in ASCII code */
		i++; /* increment i to print correctly in reverse (see below) */
	}
	else
	{
		while (src_integer != 0)
			{
			last_digit = src_integer % 10; /* modulo 10 to keep the last digit */
			if (last_digit < 0)	/* convert to positive to avoid - sign */
				last_digit = last_digit * (-1);
			str[i] = last_digit + '0';  /* convert last_digit in ASCII code */
			i++; /* increment i */
			src_integer = src_integer / 10;
			}
	}
/* if number is negative, add '-' and increment counter for the sign */
	if (check_negative == 1)
	{
		(write(1, "-", 1));
		counter = i + 1;
	}
	else
		counter = i;
/* reverse loop to display string in order, -1 because array start at 0 in C */
	for (i = i - 1; i >= 0 ; i--)
		(write(1, &str[i], 1));

	return (counter);
}
