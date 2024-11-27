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
	char *str_null = NULL;

	printf("printf\t test 1 : b majuscule : %c et d majuscule : %c \n", 'B', 'D');
	_printf("_printf\t test 1 : b majuscule : %c et d majuscule : %c \n", 'B', 'D');

	printf("printf\t test 2.1 : b et d tout collé : %c%c \n", 'B', 'D');
	_printf("_printf\t test 2.1 : b et d tout collé : %c%c \n", 'B', 'D');

	printf("printf\t test 2.2 : Caractère avec espace : '%c' \n", 'Z');
	_printf("_printf\t test 2.2 : Caractère avec espace : '%c' \n", 'Z');

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

	printf("printf\t test 5 : 4 symboles pourcent %%%% \n");
	_printf("_printf\t test 5 : 4 symboles pourcent %%%% \n");

	printf("printf\t test 6 : 8 symboles pourcent %%%%%%%% \n");
	_printf("_printf\t test 6 : 8 symboles pourcent %%%%%%%% \n");

	printf("printf\t test 7 : 15 symboles pourcent %%%%%%%%%%%%%%% \n");
	_printf("_printf\t test 7 : 15 symboles pourcent %%%%%%%%%%%%%%% \n");

	printf("printf\t test 8 : pourcent début %% milieu %% fin %%\n");
	printf("_printf\t test 8 : pourcent début %% milieu %% fin %%\n");

	printf("printf\t test 9 : mix de pourcent et char : %% et %c \n",'Z');
	_printf("_printf\t test 9 : mix de pourcent et char : %% et %c \n",'Z');

	printf("printf\t test 10 : mix de pourcent et char tout collé à la suite : %%%c \n",'Z');
	_printf("_printf\t test 10 : mix de pourcent et char tout collé à la suite : %%%c \n",'Z');

	printf("printf\t test 11 : mix de pourcent et char tout collé à la suite x2 : %%%c%%%c  \n",'Z','y');
	_printf("_printf\t test 11 : mix de pourcent et char tout collé à la suite x2 : %%%c%%%c \n",'Z','y');

	printf("printf\t test 12 : Pourcent malformé (1 seul symbole) : % \n"); 
	_printf("_printf\t test 12 : Pourcent malformé  (1 seul symbole) : % \n");

	printf("printf\t test 13 : Une string simple : %s \n","Je suis une string simple !"); 
	_printf("_printf\t test 13 : Une string simple : %s \n","Je suis une string simple !"); 

	printf("printf\t test 13 : Une string vide : %s \n",""); 
	_printf("_printf\t test 13 : Une string vide : %s \n",""); 

	printf("printf\t test 14 : Des caractéres spéciaux : %s\n", "Tab:\tNewline:\n");
	_printf("_printf\t test 14 : Des caractéres spéciaux : %s\n", "Tab:\tNewline:\n");

	printf("printf\t test 15 : une chaine NULL : %s\n", str_null);
	_printf("_printf\t test 15 : une chaine NULL : %s\n", str_null);

	printf("printf\t test 17 : 100 pourcent ? %s\n", "100% !");
	_printf("_printf\t test 17 : 100 pourcent ? %s\n", "100% !");

	printf("printf\t test 18 : Mélange simple : %c (c), %s (s), %% (pourcent)\n",'A',"Lorem ipsum");
	_printf("_printf\t test 18 : Mélange simple: %c (c), %s (s), %% (pourcent)\n",'A',"Lorem ipsum");

	printf("printf\t test 19 : Mélange complexe %s (vide), ASCII 65 : %c, NULL : %s, spéciaux : [%c|%c|%c]\n", "", 65, str_null, '\n', '\t', '\\');
	_printf("_printf\t test 19 : Mélange complexe %s (vide), ASCII 65 : %c, NULL : %s, spéciaux : [%c|%c|%c]\n", "", 65, str_null, '\n', '\t', '\\');

	return (0);
}
