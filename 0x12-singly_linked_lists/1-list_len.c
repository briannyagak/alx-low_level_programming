#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns number of elements in a linked list
 * @h: the pointer to the list_t list
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
size_t m = 0;

while (h)
{
	m++;
	h = h->next;
}
return (m);
}

