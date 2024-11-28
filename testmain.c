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

	int len1 = 0;
	int len2 = 0;

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

	printf("CALCUL DES LONGUEURS A \n");
	len1 = printf("vrai printf\t test A20 : Test des longueurs de chaine\n");
	len2 = _printf("holb printf\t test A20 : Test des longueurs de chaine\n");
	printf("len printf = %d && len _printf = %d\n", len1, len2);

	printf("CALCUL DES LONGUEURS B \n");
	len1 = printf("vrai printf\t test B21 : Test des longueurs de chaine ave une string simple : %s \n","Je suis une string simple !"); 
	len2 = _printf("holb printf\t test B21 : Test des longueurs de chaine ave une string simple : %s \n","Je suis une string simple !"); 
	printf("len printf = %d && len _printf = %d\n", len1, len2);

	printf("CALCUL DES LONGUEURS C \n");
	len1 = printf("vrai printf\t test C22 : char : %c \n",'A'); 
	len2 = _printf("holb printf\t test C22 : char : %c \n",'A'); 
	printf("len printf = %d && len _printf = %d\n", len1, len2);

	printf("CALCUL DES LONGUEURS D \n");
	len1 = printf("vrai printf\t test D23 : char x2 : %c et %c \n",'A','B'); 
	len2 = _printf("holb printf\t test D23 : char x2 : %c et %c \n",'A','B'); 
	printf("len printf = %d && len _printf = %d\n", len1, len2);
	
	printf("CALCUL DES LONGUEURS D \n");
	len1 = printf("vrai printf\t test D23 : string : %s et un char %c et encore un autre %c \n","Hello World", 'A','B'); 
	len2 = _printf("holb printf\t test D23 : string : %s et un char %c et encore un autre %c \n","Hello World", 'A','B'); 
	printf("len printf = %d && len _printf = %d\n", len1, len2);

	return (0);
}
