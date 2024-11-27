#include <stdarg.h> /* to use variadic arguments */
#include <stdio.h> /* to test with real printf */
#include <unistd.h> /* to use write function*/
#include <stdlib.h> /* malloc et free */
#include "main.h" /*prototype of function*/


/**
 * _printf - Emulate printf function
 * Description : _printf display string with specified format (see exemple) 
 * @format: list of types of arguments passed to the function
 * Exemple : _printf("The first letter of alphabet is : %c", 'A');
 * Output : 'The first letter of alphabet is A'
 * Return: number of character printed
 */
int _printf(const char * format, ...)
{
  /* Variable declaration and initialisation */
  int j;
    unsigned int cursor = 0;
  unsigned int p_cursor = 0;
  /*Array of structure associate a type with the corresponding func*/
  print_function fucntion_search[] = {
    {'c', print_char},  /* Prints a char */
    {'s', print_string},  /* Prints a string */
    {'%', print_percent}, /* Prints a percent */
    {'\0',NULL}
  };

  va_list args; /* Arguments list declaration */

  va_start(args, format); /* Initialize list with fixed arguments */



  /* Loop through format until end */
  while (format[cursor] != '\0')
  {
    /* if cursor found a ''%'' */
    if (format[cursor]=='%')
    {
      /* if % is detected : print until cursor */
      write(1,&format[p_cursor],(cursor-p_cursor));

     /* check if followed character is on the type list */
      j = 0; /* initialize J to start the type list at the begining */
      while (fucntion_search[j].type != '\0')
      {
        if (format[cursor+1] == fucntion_search[j].type)
        {  /* call associated function */
          fucntion_search[j].func(args);
          break; /* Exit loop after finding match */
        }
        j++; /* increment J for while loop */
      }
      /* update cursor to skip ''%X' */
      cursor = cursor + 2;
      /* update p_cursor */
      p_cursor = cursor;
    }
    else
    {
      cursor++;
    }

  }

  /* if cursor found last character */
  if (format[cursor]=='\0')
  {  /* display the rest */
    write(1,&format[p_cursor],(cursor-p_cursor));
  }

  va_end(args); /* Ends the use of the list */
  return(0);
}
