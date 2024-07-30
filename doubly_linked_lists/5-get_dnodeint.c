#include <stdlib.h>
#include "lists.h"

/**
  * get_dnodeint_at_index - write a func that return the
  * nth node of a dlistint_t linked list.
  * @head: ptr to the start of the list, at the head.
  * @index: index node, à commencer par 0.
  *
  * Return: a ptr to the nth node OR NULL in case the node doesn't exists.
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int current_index = 0;

	while (head != NULL)
	{
		if (current_index == index)
		{
			return (head);
		}

		head = head->next;
		current_index++;

	}

	return (NULL);
}
