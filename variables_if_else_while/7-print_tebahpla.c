#include <stdio.h>

/**
  * main - afficher l'alphabet
  *
  * Return: 0;
  */
int main(void)
{
	char ch;

	for (ch = 'z'; ch <= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);

}

