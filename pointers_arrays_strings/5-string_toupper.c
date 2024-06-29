#include "main.h"
#include <stdio.h>

/**
 * *string_toupper - check the code
 * @ptr: représente un pointeur vers un char.
 * Return: Always 0.
 */
char *string_toupper(char *ptr)
{
	char *str = ptr;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - 'a' + 'A';
		}
		ptr++;
	}
	return (str);
}
