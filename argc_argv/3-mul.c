#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - fonction qui multiplie 2 nbres.
  * @argv: le tableau d'arguments.
  * @argc: le nombre d'arguments de la f.
  * Return: 0 si le prog a 2 args, -1 sinon.
  */
int main(int argc, char *argv[])
{
	int num1, num2, resultat;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	resultat = num1 * num2;

	printf("%d\n", resultat);

	return (0);
}
