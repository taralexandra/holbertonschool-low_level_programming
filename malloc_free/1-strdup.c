#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * *_strdup - Retourne un ptr vers un nouvel esp alloué en mmr
  * qui va contenir une copie de la str donnée en paramètre.
  *
  * @str: la chaîne que l'on veut dupliquer.
  *
  * Return: soit ptr vers la chaîne dupliquée soit NULL.
  */
char *_strdup(char *str)
{
	char *duplicate_str;

	unsigned int i, length;

	if (str == NULL)
	{
		return (NULL);
	}

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	duplicate_str = (char *)malloc(sizeof(char) * (length + 1));

	if (duplicate_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length; i++)
	{
		duplicate_str[i] = str[i];
	}

	duplicate_str[length] = '\0';

	return (duplicate_str);
}
