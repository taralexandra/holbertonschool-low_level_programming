#include "main.h"
#include <stdio.h>

/**
 * print_rev - check the code
 * @s: paramètre.
 * Return: Always 0.
 */
void print_rev(char *s)
{

int i, j, len;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	len = i;

	for (j = len - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
