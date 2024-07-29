#include <stdio.h>
#include "lists.h"

/**
  * list_len - write a function that return
  * the nbre of elements in a linked list.
  * @h: ptr to the head of the list (pointe vers 1er item).
  * Return: nbre of nodes in the list.
  */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}

