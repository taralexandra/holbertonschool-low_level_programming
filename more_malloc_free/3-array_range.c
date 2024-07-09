#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * *array_range - créer un tab d'entiers.
  * @min: la première valeur du tab.
  * @max: la dernière val du tab.
  * Return: si min > max ou si échec, rtrn NULL.
  * et si success rtrn ptr a tab créé.
  */
int *array_range(int min, int max)
{
	int *array;
	int size;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = min + i;
	}

	return (array);
}
