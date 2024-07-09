#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * *string_nconcat - concaténer 2 chaînes.
  * @s1: string 1.
  * @s2: string 2 à concaténer avec la 1.
  * @n: le nbre max de bytes de s2 à concat avec s1.
  * Return: un ptr ou NULL.
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat2strings;
	unsigned int len = n, index;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (index = 0; s1[index]; index++)
	{
		len++;
	}
	concat2strings = malloc(sizeof(char) * (len + 1));

	if (concat2strings == NULL)
	{
		return (NULL);
	}

	len = 0;

	for (index = 0; s1[index]; index++)
	{
		concat2strings[len++] = s1[index];
	}
	for (index = 0; s2[index] && index < n; index++)
	{
		concat2strings[len++] = s2[index];
	}

	concat2strings[len] = '\0';

	return (concat2strings);
}
