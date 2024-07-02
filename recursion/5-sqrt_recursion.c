#include "main.h"

/**
  * fonction_test - def/
  * @n: Le nombre dont on cherche la racine carrée.
  * @i: le nombre que l'on va tester pour obtenir le carré.
  * Return: Racine carrée de n ou -1 si n n'a pas de racine carrée naturelle.
  */
int fonction_test(int n, int i)
{
	if (n < i * i)
	{
		return (-1);
	}
	else if (n == i * i)
	{
		return (i);
	}
	return (fonction_test(n, i + 1));
}

/**
  * _sqrt_recursion -
  *
  * @n: Le nombre dont on cherche la racine carrée.
  * Return: Racine carrée de n ou -1 si n n'a pas de racine carrée naturelle.
  */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (fonction_test(n, 1));
}
