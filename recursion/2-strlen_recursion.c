#include "main.h"

/**
  * _strlen_recursion - afficher la longeur d'une string.
  * @s: la chaîne concernée.
  * Return: length of string.
  */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}

	return (length);
}
