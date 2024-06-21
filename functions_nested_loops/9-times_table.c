#include "main.h"

/**
 * times_table - check the code
 *
 * Commentaire spécial dyscalculique...
 * a c'est le multiplicande
 * b c'est le multiplicateur
 * c c'est le fruit de l'opé, le résultat.
 * Par ex 7 fois 3 egal 21
 * 7 est a, 3 est b et 21 est c.
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int a, b, c;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			c = b * a;
			if (b == 0)
			{
				_putchar(c + '0');
			}

			if (c < 10 && b != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(c + '0');
			}
			else if (c >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
