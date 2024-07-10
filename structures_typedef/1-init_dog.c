#include <stdio.h>
#include "dog.h"

/**
  * init_dog - f qui initialise une var
  * de type struct dog.
  * @name: le nom de toutou.
  * @age: l'âge de toutou.
  * @owner: celui qui achète les nonos de toutou.
  * @d: ptr vers dog.
  * permet de modif les membres de la struct dog (name, age, owner).
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
