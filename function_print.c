#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * print_string - print a string
 *@args: arg receive for print the string
 */
void print_string(va_list args)
{
	int i = 0;
	char *ptr;

	ptr = args;
	while (ptr[i] != '\0')
	{
		i++;
	}
	write(1, ptr, i);
}
