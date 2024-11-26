#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int _printf(const char * format, ...);

/**
 * struct print_function - structure for choose the good function
 *@type: char for selection of goood function
 *@func: pointer of function
 */
typedef struct print_function
{
	char type;
	int (*func)(va_list args);
};

int _putchar(char c);

void print_percent(va_list args);

void print_string(va_list args);

void print_char(va_list args);



#endif
