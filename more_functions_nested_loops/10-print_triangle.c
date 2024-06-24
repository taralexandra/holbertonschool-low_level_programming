#include <stdio.h>
#include "main.h"

/**
 * print_triangle - check the code
 * @size: taille.
 * Return: Always 0.
 */

void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j <= i; j++)
		{
		_putchar('#');
		}
		_putchar('\n');
	}
}
