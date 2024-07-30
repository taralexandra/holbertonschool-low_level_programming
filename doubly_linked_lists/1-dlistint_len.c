#include <stdio.h>
#include "lists.h"

/**
  * dlistint_len - print the number of items in a list.
  * @h: ptr to the header of the list, he first node.
  *
  * Return: the number of items.
  */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
