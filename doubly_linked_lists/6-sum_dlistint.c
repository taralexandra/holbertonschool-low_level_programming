#include <stdlib.h>
#include "lists.h"

/**
  * sum_dlistint - function that returns the sum of all data (n)
  * of a linked list dlistint_t.
  * @head: ptr to head of the list.
  *
  * Return: the sum of all the data (n) or 0, in case it's empty.
  */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
