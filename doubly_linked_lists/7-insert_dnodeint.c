#include <stdlib.h>
#include "lists.h"

/**
  * insert_dnodeint_at_index - func that inserts a new
  * node at one specific place.
  * @h: Dble ptr to the head of the list.
  * @idx: like a cross on a tresure map,
  * the place where the node should be insert.
  * @n: data to insert to the new node.
  *
  * Return: the address of the new node (idx) or NULL in case it fails.
  */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int current_index = 0;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	temp = *h;

	while (temp != NULL && current_index < idx - 1)
	{
		temp = temp->next;
		current_index++;
	}
	if (temp == NULL || temp->next == NULL)
	{
		if (current_index + 1 == idx)
		{
			return (add_dnodeint_end(h, n));
		}

		return (NULL);
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = temp->next;
	new_node->prev = temp;

	if (temp->next != NULL)
	{
		temp->next->prev = new_node;
	}
	temp->next = new_node;
	return (new_node);
}
