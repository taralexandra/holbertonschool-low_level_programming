#include "main.h"
#include <limits.h>

/**
  * get_bit - Write a function that returns
  * the value of a bit at a given index.
  * @index: the index of the bit to obtain.
  * @n: the nmbr to look at.
  *
  * Return: the value of the bit at
  * index index or -1 if an error occured.
  */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * CHAR_BIT)
	{
		return (-1);
	}

	return ((n >> index) & 1);
}
