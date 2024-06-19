#include <stdio.h>

/**
  * main - afficher les chiffres de 0 compris à 9 compris
  *
  * Return: 0;
  */
int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
	putchar(c);
	}
	putchar('\n');
	return (0);
}

