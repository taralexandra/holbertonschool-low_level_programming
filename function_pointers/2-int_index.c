#include <stdio.h>
#include "function_pointers.h"

/**
  * int_index - f qui recherche un entier.
  * @array: le tableau.
  * @size: le nbre d'items du tableau.
  * @cmp: ptr vers la f qui permet de comparer des valeurs.
  * Return: si aucun item ne match ou size <= 0 alors rtrn -1
  * Autrement, l'index (i) du premier item pour lequel la
  * f cmp ne retourne pas 0.
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	for (i = 0 ; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
