#include "main.h"
#include <stdio.h>

/**
 * rev_string - check the code
 * @s: string.
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int len = 0;
	int i;
	char tempo;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len / 2; i++)
	{
		tempo = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = tempo;
	}
}
