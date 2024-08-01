#include "main.h"
#include <limits.h>

/**
 * set_bit - Write a function that sets the value
 * of a bit to 1 at a given index.
 * @n: ptr o the number to be modified.
 * @index: the index of the bit to set.
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(*n) * CHAR_BIT)
	{
		return (-1);
	}

	mask = 1UL << index;

	*n |= mask;

	return (1);
}
