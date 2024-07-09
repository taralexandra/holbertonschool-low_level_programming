#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
  * *_calloc - f qui alloue de la mmr pour un tab
  * @nmemb: nbr d'items ds le tab.
  * @size: taille en bytes (octets) pr chque item.
  * Return: si nemb = 0 et size = 0 alors f échoue.
  * Si fonctionne rtrn un ptr mmr allouée.
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem_allouee;
	char *filler;
	unsigned int index;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	mem_allouee = malloc(size * nmemb);

	if (mem_allouee == NULL)
	{
		return (NULL);
	}

	filler = mem_allouee;

	for (index = 0; index < (size * nmemb); index++)
	{
		filler[index] = '\0';
	}

	return (mem_allouee);
}
