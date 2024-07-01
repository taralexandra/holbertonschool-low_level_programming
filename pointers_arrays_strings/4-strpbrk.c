#include <stdio.h>
#include "main.h"

/**
  * _strpbrk - fonction
  * @s: la string qui est concernée.
  * @accept: le set d'octes dans lequel on cherche.
  * Return: pointer ou NULL.
  */
char  *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
