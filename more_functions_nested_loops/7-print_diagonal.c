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
		int a, b;

		for (a = 1; a <= n; a++)
		{
			for (b = 0; b < n; b++)
			{
				if (a == b)
					_putchar('\\');
				else if (b < a)
					_putchar(' ');
			}
		_putchar('\n');
		}
	}

}
