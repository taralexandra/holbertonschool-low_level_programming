#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
  * print_dog - écrire une f qui affiche une struct dog
  * @d: struct dog à afficher.
  *
  */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	if (d->name == NULL)
	{
		d->name = "(nil)";
	}

	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}


