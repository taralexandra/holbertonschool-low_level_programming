#include "main.h"
#include <stdio.h>

/**
 * _puts - check the code
 * @str: string.
 * Return: Always 0.
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	
	_putchar('\n');

}
