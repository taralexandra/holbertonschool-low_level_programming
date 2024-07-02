#include "main.h"

/**
  * factorial - définition.
  * @n: Le nombre dont on doit trouver la factorielle.
  * Return: -1 si erreur.
  */
int factorial(int n)
{
	int result = n;

	if (n < 0)
	{
		return (-1);
	}
	else if (n >= 0 && n <= 1)
	{
		return (1);
	}
	result *= factorial(n - 1);

	return (result);
}

