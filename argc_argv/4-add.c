#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
  * main - Additionner deux chiffres positifs
  * @argv: le tableau d'arguments.
  * @argc: le nombre d'aguments.
  * Return: 0 si fonctionne et 1 s'il y a un symbole
  * qui n'est pas un chiffre.
  */
int main(int argc, char *argv[])
{
	int num, somme = 0;
	int i, j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < argc; i++)
	{

		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}

	num = atoi(argv[i]);
	somme += num;
	}

	printf("%d\n", somme);

	return (0);
}



