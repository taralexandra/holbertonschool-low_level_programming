#include <stdlib.h>
#include "lists.h"

/**
  * free_dlistint - set free the list dlistint_t.
  * @head: the ptr to the head, start, of the list.
  *
  */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
