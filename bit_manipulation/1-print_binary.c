#include "main.h"

/**
  * print_binary - prints the binary representation of nbr.
  *
  * @n: the number to print as a binary.
  */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}

	_putchar((n & 1) + '0');
}

