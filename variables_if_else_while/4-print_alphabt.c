#include <stdio.h>

/**
  * main - afficher l'alphabet
  *
  * Return: 0;
  */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	if (ch == 'e' || ch == 'q')
	{
	continue;
	}
	putchar(ch);
	}
	putchar('\n');

	return (0);

}

