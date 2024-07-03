#include <stdio.h>
#include "main.h"

/**
  * main - fonction qui affiche les arguments.
  * @argv: liste des  arguments.
  * @argc: le nombre d'arguments.
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int argument;

	for (argument = 0; argument < argc; argument++)
	{
		printf("%s\n", argv[argument]);
	}

	return (0);
}
