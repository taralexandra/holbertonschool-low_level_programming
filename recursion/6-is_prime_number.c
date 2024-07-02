#include "main.h"

/**
  * chiffre_actuel - permet de calculer si
  * un chiffre est premier de façon recursive.
  * @n: chiffre considéré.
  * @i: itérateur.
  * Return: 1 si n est un chi premier, 0 sinon.
  */
int chiffre_actuel(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (chiffre_actuel(n, i - 1));
}

/**
  * is_prime_number - L'objectif est de dire si
  * un entier est un nbre premier ou pas.
  * @n: chiffre à évaluer.
  * Return: 1 si n est un chi premier, 0 sinon.
  */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (chiffre_actuel(n, n - 1));
}
