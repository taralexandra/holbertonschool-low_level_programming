#include <stdio.h>
#include "function_pointers.h"

/**
  * print_name - écriure une f qui affiche un nom.
  * @name: le nom d'une personne, ou de ce que l'on veut.
  * @f: ptr vers une fonction qui affiche un nom.
  * Return: Rien, void.
  */
void print_name(char *name, void(*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
