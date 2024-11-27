#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

/**
 * struct struct_print - structure for choose the good function
 *@type: char for selection of goood function
 *@func: pointer of function
 */
typedef struct struct_print
{
	char type;
	void (*func)(va_list args);
} print_function;

int _printf(const char * format, ...);

int _putchar(char c);

void print_percent(va_list args);

void print_string(va_list args);

void print_char(va_list args);

#endif
