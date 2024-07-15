#include <stdio.h>
#include "function_pointers.h"

/**
  * array_iterator - f qui execute une f donnée
  * en paramètre sur chaque item d'un tab.
  * @array: le tableau.
  * @size: la taille du tab.
  * @action: est un ptr ver la f qu'on utilise.
  * Return: void.
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
