#include <stdlib.h>
#include "lists.h"

/**
  * add_dnodeint - function that will add a new node to the list.
  * @head: double ptr to the start of the list.
  * @n: data to insert in the new node.
  *
  * Return: the address of the new node, or NULL in case it fails.
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}

	*head = new_node;

	return (new_node);
}
