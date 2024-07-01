#include <stdio.h>
#include "main.h"

/**
  * *_strstr - def
  * @needle: la chaîne que l'on va rechercher dans celle du dessous.
  * @haystack: volià, c'est dans celle-ci que l'on cherche à repérer needle.
  *
  * Return: 0
  */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack)
	{
		h = haystack;
		n = needle;

		while (*h && *n && (*h == *n))
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
