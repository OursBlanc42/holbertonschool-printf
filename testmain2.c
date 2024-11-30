#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{

	int len1 = 0;
	int len2 = 0;

	printf("\n### TEST BINARY 1 ###\n");
    len1 = printf("Vrai printf\t 42 en binaire : %b\n",42);
    len2 = _printf("Holb printf\t 42 en binaire : %b\n",42);
    printf("len printf = %d && len _printf = %d\n", len1, len2);

	return (0);
}