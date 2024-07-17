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
	va_list args;

	unsigned int index;

	int sum = 0;

	va_start(args, n);

	for (index = 0; index < n; index++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
