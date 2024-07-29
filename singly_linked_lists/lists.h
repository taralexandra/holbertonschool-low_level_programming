#ifndef LIST_H
#define LIST_H

/* Define struct list_t */

/**
  * struct list_s - singly linked list
  * @str: string.
  * @len: length of the string.
  * @next: ptr to the next node (noeud).
  */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/* Prototypes of functions */
int _putchar(char c);
size_t print_list(const list_t *h);


#endif
