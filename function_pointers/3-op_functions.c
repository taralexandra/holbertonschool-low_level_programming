#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
  * op_add - f qui permet d'additionner.
  * @a: c'est le nbre a.
  * @b: c'est le nbre b.
  *  Return: somme de deux nombres, a et b.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - f qui permet de soustraire.
  * @a: c'est le nbre a.
  * @b: c'est le nbre b.
  * Return: résultat de la soustraction.
  */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - f qui permet de multiplier.
  * @a: chiffre à multiplier.
  * @b: chiffre avec lequel on va le multiplier.
  * Return: le résultat de la multiplication.
  */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - f qui permet de faire une division.
  * @a: le premier chiffre à diviser.
  * @b: chiffre avec lequel on divise.
  * Return: le résultat.
  */
int op_div(int a, int b)
{
	return (a / b);
}

/**
  * op_mod - Renvoie le reste de la division de deux nombres.
  * @a: premier chiffre.
  * @b: second chiffre.
  * Return: le résultat, soit le reste de la div de a par b.
  */
int op_mod(int a, int b)
{
	return (a % b);
}

