#include "main.h"
#include <stdio.h>

/**
 * _strlen - check the code
 * @s: parameter.
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
