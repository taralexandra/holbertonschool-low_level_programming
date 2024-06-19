#include <stdio.h>

/**
  * main - afficher tous les single digit (chiffres) de 0 à 9
  * séparés par un espace et une virgule ex : 0, 1, 2,...
  * Return: 0;
  */
int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
		if (c != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}

