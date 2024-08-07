#include <stdio.h>

/**
  * binary_to_uint - function that converts a
  * binary nbr to an unsigned int
  * @b:the binary to convert.
  *
  * Return: the converted nbr or 0 if there is
  * a char in the string of b wich is not 0 or 1.
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}

		result = (result << 1) | (*b - '0');

		b++;
	}

	return (result);

}
