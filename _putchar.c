#include "main.h"

/**
 * _putchar - put a char in the std out
 *@c: the character to print
 *Return: return
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
