#include "main.h"
#include <stdio.h>

/**
 * *_memset - remplir la mémoire avec un octet constant.
 * @s: zone mémoire à remplir.
 * @b: caractère à copier.
 * @n: le nombre de fois que l'on veut copier b.
 * Return: pointeur zone mmr.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

