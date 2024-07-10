#ifndef DOG_H
#define DOG_H

/**
  * struct dog - Poppy définir une structure.
  * @name: nom du chien.
  * @age: age du toutou.
  * @owner: un chanceux incroyable, n'est-ce pas ?!
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog * d);

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
