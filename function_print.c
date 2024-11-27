#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * print_string - print a string
 * @args: arg receive for print the string
 * Return : The length of the printed string
 */
void print_string(va_list args)
{	
	/* Declare and initialize variable */
	int i = 0;
	int counter = 0;
	/* catch the string in a pointer */
	char *str = va_arg(args, char *);

	if (str == NULL)
	{	
		/* Replace NULL with “(nil)”. */
		str = "(null)";
	}
	/* loop char by char */
	while (str[i] != '\0')
	{	/* display each char */
		write(1, &str[i], 1);
		counter++; 
		i++;
	}
	
	/*return (counter);*/
}

/**
 * print_char - print a char
 * @args: arg receive for print the char
 * Return : Void (but in future : int )
 */
void print_char(va_list args)
	{ /* char arguments are promoted to int in variadic function */
	/* so va_arg must use int to retrieve them. */
	int *ptr = NULL;  /* declare NULL pointer */
	ptr = malloc(sizeof(char)); /* define size for one char */
	/* write the args in ptr (see previous comments to see why is "int")*/
	*ptr = va_arg(args, int); 
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
