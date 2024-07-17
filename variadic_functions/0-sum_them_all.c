#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
  * sum_them_all - écrire une f qui rtrn la somme
  * de tous ses paramètres.
  * @n: le nbre de paramètres passés à la f.
  * @...: un nbre différent de paramètres pour calculer somme.
  * Return: si n == 0, alors 0. Sinon, la sum de ts les param.
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;

	int sum = 0;

	va_list args;

	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; ++i)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}

