#include "lists.h"


/**
 * list_len - returns the number of elements in a linked list
 * @h: The pointer to the node
 *
 * Return: Number of elements in the linked list
 */


size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}
