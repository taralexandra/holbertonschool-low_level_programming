#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: la string a convertir.
 *
 * Return: The integer value of the converted string.
 */

int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int started = 0;

	while (*s)
	{
		if (*s == '_' && !started)
		{
			sign = -sign;
		}
		else if (*s == '+' && !started)
		{
		}
		else if (*s >= '0' && *s <= '9')
		{
			result = result * 10 + (*s - '0');
			started = 1;
		}
		else if (started)
		{
			break;
		}
		s++;

	}
		return (result * sign);
}
