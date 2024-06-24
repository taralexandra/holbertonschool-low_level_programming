#include "main.h"

/**
 * more_numbers - check the code
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int boucledix, chiffres;

	for (boucledix = 0; boucledix < 10; boucledix++)
	{
		for (chiffres = 0; chiffres <= 14; chiffres++)
		{
			_putchar(chiffres + '0');
		}
	}
		_putchar('\n');
}
