#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
  * *new_dog - écrire une f qui va créer un nouveau chien.
  * @name: le nom de ce bon vieux toutou !
  *
  * @age: tu sais que l'âge d'un chien peut se traduire en
  * age humain ? idem pour les chats.
  * quitte à lire mon code, autant apprendre un truc, non ?
  * généralement on va multiplier par 7, mais ça varie selon
  * les sources, et selon le chien.
  *
  * @owner: celui qui se fait piquer sa place sur le canap
  * et qui trouve ça cool.
  * Return: nouveau chien.
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog = (dog_t *)malloc(sizeof(dog_t));

	if (newDog == NULL)
	{
		return (NULL);
	}

	newDog->name = (char *) malloc(strlen(name) + 1);

	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}
	strcpy(newDog->name, name);

	newDog->age = age;

	newDog->owner = (char *) malloc(strlen(owner) + 1);

	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}
	strcpy(newDog->owner, owner);

	return (newDog);
}
