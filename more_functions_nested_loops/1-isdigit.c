#include "main.h"

/**
 * _isdigit - check the code.
 * @c: The character to print
 * Return: Always 0.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
