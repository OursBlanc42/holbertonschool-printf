#include <unistd.h>
#include "main.h"

/**
* print_binary - display binary version of unsigned int
* @args: arg receive for print the binary
* Description :
* Algorithm to Convert Decimal Numbers to Binary in C
* Find the remainder by calculating the modulus of the source integer by 2
* Store the remainder as a ASCII in arr_binary
* Update the source integer by dividing it by 2
* Repeat these steps till the source integer is greater than zero
* Return: The length of the binary
*/

int print_binary(va_list args)
{
	/* declare and initialize variable */
	int index = 0;
	int arr_binary[64];
	int length = 0;
	unsigned int src_integer = va_arg(args, unsigned int);

	/* check special case equal zéro */
	if (src_integer == 0)
	{
		write(1, "0", 1);
		return (1);
	}

	while (src_integer > 0)
	{
		arr_binary[index] = (src_integer % 2) + '0';
		src_integer = src_integer / 2;
		index++;
	}

	/* Catch length and update index because array start at 0 */
	length = index;
	index--;

	/* Reverse loop to display each binary char */
	for (; index >= 0; index--)
	{
		write(1, &arr_binary[index], 1);
	}

	return (length);
}

/* Create this function just for testing gitflow (should be update)*/
int print_octal(va_list args)
{
	(void)(args);	
}