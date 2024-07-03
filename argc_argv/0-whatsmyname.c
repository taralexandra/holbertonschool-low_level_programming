#include "main.h"
#include <stdio.h>

/**
  * main - fonction qui permet d'afficher
  * le nom du programme.
  * @argc: le nombre d'aguments.
  * @argv: la liste (ou tableau) d'arguments.
  * Return: 0.
  */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
