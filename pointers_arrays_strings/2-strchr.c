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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return ((char *)s);
		}
		s++;
	}
	return (NULL);
}
