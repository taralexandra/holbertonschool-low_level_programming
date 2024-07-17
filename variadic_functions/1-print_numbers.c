#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
  * print_numbers - f qui affiche des chiffres, suivis par une nouv ligne.
  * @n: le nbre d'entiers (int) passés à la fonction.
  * @separator: la string qui doit être affichée entre les nbres.
  *
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list nbres;

	va_start(nbres, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nbres, int));

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(nbres);

	printf("\n");
}



