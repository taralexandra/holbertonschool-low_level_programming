#include "main.h"
#include <stdio.h>

/**
  * print_chessboard - on va afficher un échiquier.
  * @a: tableau multidimensionnel 8 par 8.
  * En gros, c'est un tableau qui contient 8 tableaux.
  * Et chacun contient des pièces ou cases de l'échiquier.
  *
  * Return: 0
  */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
