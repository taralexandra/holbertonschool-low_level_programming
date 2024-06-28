#include "main.h"
#include <stdio.h>

/**
 * *_strcat - check the code
 * @dest: string to append
 * @src: string to add
 * @n: number of bytes of str to concatenate
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
