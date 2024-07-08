#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
  * *str_concat - obj concaténer 2 strings.
  * @s1: string 1 à concaténer avec s2.
  * @s2: string 2 à concaténer avec s1.
  * Return: string concaténée ou Null en cas d'échec.
  */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int i, concat_index = 0, len = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] || s1[i]; i++)
	{
		len++;
	}
	concat_str = malloc(sizeof(char) * len);

	if (concat_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i]; i++)
	{
		concat_str[concat_index++] = s1[i];
	}

	for (i = 0; s2[i]; i++)
	{
		concat_str[concat_index++] = s2[i];
	}
	return (concat_str);
}
