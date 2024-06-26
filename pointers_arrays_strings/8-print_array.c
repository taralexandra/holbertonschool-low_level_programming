#include "main.h"
#include <stdio.h>

/**
 * print_array - check the code for
 * @n: paramètre.
 * @a: paramètre.
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			printf("%d", a[i]);

		}
		else
		{
			printf(", %d", a[i]);
		}
	}
		putchar('\n');
}
