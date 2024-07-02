#include "main.h"

/**
  * _pow_recursion - déf.
  * @x: Valeur à augmenter...
  * @y: Par la puissance de Y.
  * Return: -1.
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
