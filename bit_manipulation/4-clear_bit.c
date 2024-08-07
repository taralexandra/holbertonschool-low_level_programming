#include "main.h"
#include <limits.h>

/**
  * clear_bit - Write a function that sets the
  * value of a bit to 0 at a given index.
  * @index: the index of the bit we want to set, starting from 0.
  * @n: the bit.
  *
  * Return: 1 if it worked, or -1 if an error occurred.
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(*n) * CHAR_BIT)
	{
		return (-1);
	}

	mask = 1UL << index;

	mask = ~mask;

	*n &= mask;

	return (1);
}

