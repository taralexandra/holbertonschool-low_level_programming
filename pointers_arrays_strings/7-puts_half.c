#include "main.h"

/**
 * puts_half - check the code
 * @str: string pointeur.
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int length = 0;
	int i, a;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		a = length / 2;
	}
	else
	{
		a = (length - 1) / 2 + 1;
	}

	for (i = a; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}



