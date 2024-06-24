#include "main.h"

/**
 * print_square - check the code
 * @size: taille desc.
 * Return: Always 0.
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int larg, haut;

		for (larg = 0; larg < size; larg++)
		{
			for (haut = 0; haut < size; haut++)
			{
			_putchar('#');
			}
		_putchar('\n');
		}
	}
}
