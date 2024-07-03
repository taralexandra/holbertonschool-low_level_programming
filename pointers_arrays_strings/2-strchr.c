#include <stdio.h>
#include "main.h"

/**
  * *_strchr - fonction qui permet de chercher un char.
  * @s: chaîne où chercher.
  * @c: caractère à rechercher.
  * The most wanted.
  * Return: caractère ou nul.
  */
char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;

		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}
