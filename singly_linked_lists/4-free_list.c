#include <stdlib.h>
#include "lists.h"

/**
  * free_list - free a list.
  * @head: ptr to the head of the list.
  *
  */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
