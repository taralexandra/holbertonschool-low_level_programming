#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
  * print_list - Write a function that prints all
  * the elements of a list.
  * @h: ptr to the list_t to print.
  * Return: the nbre of nodes (noeuds) to print.
  */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0](nil)\n");
		}

		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}

		h = h->next;
		count++;
	}

	return (count);
}
