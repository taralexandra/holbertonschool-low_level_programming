#include "main.h"
/**
 * main - check the code in order to print the alphabet
 *
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet();
	return (0);
}
/**
 * print_alphabet - Prints the alphabet in lowercase followed by a new line
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
