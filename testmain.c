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
	
	printf("printf\t test 1 : b majuscule : %c et d majuscule : %c \n", 'B', 'D');
	_printf("_printf\t test 1 : b majuscule : %c et d majuscule : %c \n", 'B', 'D');

	printf("printf\t test 2.1 : b et d tout collé : %c%c \n", 'B', 'D');
	_printf("_printf\t test 2.1 : b et d tout collé : %c%c \n", 'B', 'D');

	printf("printf\t test 2.2 : Caractère avec espace : '%c' \n", 'A');
	_printf("_printf\t test 2.2 : Caractère avec espace : '%c' \n", 'A');

	printf("printf\t test 2.3 : Caractère ASCII 65 : %c \n", 65);
	_printf("_printf\t test 2.3 : Caractère ASCII 65 : %c \n", 65);

	printf("printf\t test 2.4 : Saut de ligne comme caractère : [%c] \n", '\n');
	_printf("_printf\t test 2.4 : Saut de ligne comme caractère : [%c] \n", '\n');

	printf("printf\t test 2.5 : Tabulation comme caractère : [%c] \n", '\t');
	_printf("_printf\t test 2.5 : Tabulation comme caractère : [%c] \n", '\t');

	printf("printf\t test 2.6 : Backslash comme caractère : [%c] \n", '\\');
	_printf("_printf\t test 2.6 : Backslash comme caractère : [%c] \n", '\\');

	printf("printf\t test 3 : pourcent %% \n");
	_printf("_printf\t test 3 : pourcent %% \n");

	printf("printf\t test 4 : 3 symbole pourcent %%% \n");
	_printf("_printf\t test 4 : 3 symbole pourcent %%% \n");



	return (0);
}
