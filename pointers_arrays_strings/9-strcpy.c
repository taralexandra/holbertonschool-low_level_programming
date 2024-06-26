#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Copies a string pointed to by @src, including the
 *           terminating null byte, to a buffer pointed to by @dest.
 * @dest: A buffer - buffer = tampon  to copy the string to.
 * @src: The source string to copy.
 *
 * Return: A pointer to the destination string @dest.
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	if (dest == NULL || src == NULL)
	{
		return (NULL);
	}

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';

	return (dest);
}
