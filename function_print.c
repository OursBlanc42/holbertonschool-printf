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

/**
 * print_char - print a char
 *@args: arg receive for print the char
 */
void print_char(va_list args)
{ /* char arguments are promoted to int in variadic function */
  /* so va_arg must use int to retrieve them. */
	int *ptr = NULL;  /* declare NULL pointer */
  ptr = malloc(sizeof(char)); /* define size for one char */
  *ptr = va_arg(args, int); /* write the args in ptr (see top comments to see why is "int")*/
  write(1,ptr,1); /* write the char */
  free(ptr); /* free memory */
}

void print_percent(va_list args)    /* TODO : adapt print_char function */
{   
  (void)args; /*Ignore the arguments because % does not take any*/
  int ascii_value = 37; /* Stock the ascii value of % */
  int *ptr = &ascii_value; /* Create a pointer to the integer value */
  write(1, ptr, 1); /*write % */
}
