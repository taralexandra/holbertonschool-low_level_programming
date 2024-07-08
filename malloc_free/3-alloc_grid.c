#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * **alloc_grid - f retourne ptr vers tab 2D.
  * @height: hauteur du tab 2D.
  * @width: largeur du tab 2D.
  * Return: width, height ou NULL en cas d'échec.
  */
int **alloc_grid(int width, int height)
{
	int **tab2D;
	int h_index, w_index;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	tab2D = malloc(sizeof(int *) * height);

	if (tab2D == NULL)
	{
		return (NULL);
	}
	for (h_index = 0; h_index < height; h_index++)
	{
		tab2D[h_index] = malloc(sizeof(int) * width);

		if (tab2D[h_index] == NULL)
		{
			for (; h_index >= 0; h_index--)
			{
				free(tab2D[h_index]);

				free(tab2D);
				return (NULL);
			}
		}
	}
	for (h_index = 0; h_index < height; h_index++)
	{
		for (w_index = 0; w_index < width; w_index++)
		{
			tab2D[h_index][w_index] = 0;
		}
	}
	return (tab2D);
}
