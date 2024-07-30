#include "lists.h"
#include <stdlib.h>

/**
  * add_dnodeint_end - write a function that adds
  * a new node at the end of a list.
  * @head: double ptr to the head, the first node of the list.
  * @n: data to add in the new node.
  * Return: address to the new item, new node, or NULL in case it fails.
  */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	temp = *head;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = new_node;
	new_node->prev = temp;

	return (new_node);

}
