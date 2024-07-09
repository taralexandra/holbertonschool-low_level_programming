#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * *malloc_checked - f qui alloue de la mmr
  * en utilisant malloc.
  * @b: taille en bytes (octets) à allouer.
  * Return: ptr vers mmr allouée ou 98.
  */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
