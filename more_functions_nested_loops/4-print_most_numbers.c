#include "main.h"

/**
 * print_most_numbers - check the code
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		if (c == 2 || c == 4)
		{
			continue;
		}
		_putchar(c + '0');
	}
	_putchar('\n');
}
