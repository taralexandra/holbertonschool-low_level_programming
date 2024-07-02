#include "main.h"

/**
  * _print_rev_recursion - afficher une phrase à l'envers.
  *
  * @s: la chaîne concernée.
  *
  */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
