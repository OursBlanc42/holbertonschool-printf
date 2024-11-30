#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

/**
 * struct struct_print - structure for choose the right function
 *@type: char for selection of right function
 *@func: pointer of function
 */
typedef struct struct_print
{
	char type;
	int (*func)(va_list args);
} print_function;

int _printf(const char *format, ...);

int print_percent(va_list args);

int print_string(va_list args);

int print_char(va_list args);

int print_integer(va_list args);

int print_binary(va_list args);

#endif
