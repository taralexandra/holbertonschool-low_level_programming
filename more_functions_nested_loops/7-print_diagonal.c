#include "main.h"

/**
 * print_diagonal - check the code
 * @n: parameter 6.
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int a;

		for (a = 1; a <= n; a++)
		{
			_putchar('\\');
		}
		_putchar('\n');
	}

}
