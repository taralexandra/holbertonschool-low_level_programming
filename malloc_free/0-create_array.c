#include <stdlib.h>
#include "main.h"

/**
  * create_array - créer un tab de char
  * et l'initialiser avec un char.
  * @size: La taille du tab.
  * @c: char qui va permettre d'initialiser le tab.
  *
  * Return: le ptr du tableau si cela fonctionne
  * Ou Null en cas d'erreur.
  */
char *create_array(unsigned int size, char c)
{
	char *array;

	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = (char *)malloc(sizeof(char) * size);

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
