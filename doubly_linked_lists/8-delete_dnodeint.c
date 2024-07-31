#include <stdlib.h>
#include "lists.h"

/**
  * delete_dnodeint_at_index - a function that deletes
  * the node at the index i of a dbl linked list.
  * @head: dble ptr to the start (head) of the list.
  * @index: index of the node we want to delete, index i start at 0.
  * Return: 1 in case of success, -1 in case it fails.
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int current_index = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = temp->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}

		free(temp);
		return (-1);
	}
	while (temp != NULL && current_index < index)
	{
		temp = temp->next;
		current_index++;
	}
	if (temp == NULL)
	{
		return (-1);
	}
	if (temp->next != NULL)
	{
		temp->next->prev = temp->prev;
	}
	if (temp->prev != NULL)
	{
		temp->prev->next = temp->next;
	}
	free(temp);
	return (1);
}
