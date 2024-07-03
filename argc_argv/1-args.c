#include <stdio.h>
#include "main.h"

/**
  * main - fonction qui permet d'afficher
  * le  nbrd d'arguments
  * @argv: le tableau qui contient les arguments.
  * @argc: le nbr d'arguments.
  * Return: 0.
  */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
