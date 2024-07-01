#include "main.h"
#include <stdio.h>

/**
 * *_memcpy - description.
 * @dest: zone MMR destination, où on va copier.
 * @src: zone MMR source, depuis laquelle on copie.
 * @n: bytes (octets) à copier.
 * Return: Nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
