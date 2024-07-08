#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * free_grid - libère le tab 2D de l'exo 3.
  * @grid: le tab 2D que l'on veut libérer (free).
  * @height: la hauteur du tableau.
  */
void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
	{
		free(grid[index]);
	}
	free(grid);
}
