#include <stdlib.h>
#include "3-calc.h"

/**
  * get_op_func - séléctionner la bonne f à exécuter
  * selon l'opération demandée par l'utilisateur.
  * @s: l'opérateur qui est passé e argument (par l'utilisateur).
  * Return: un ptr vers la fonction selon l'opérateur
  * entré par l'utilisateur.
  */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
	{
		i++;
	}
	if (ops[i].op == NULL)
	{
		return (NULL);
	}

	return (ops[i].f);
}
