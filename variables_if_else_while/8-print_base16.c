#include <stdio.h>

/**
  * main - afficher les nombres en base 16 en minuscule(s)
  *
  * Return: 0;
  */
int main(void)
{
	int c;
	char letter;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
