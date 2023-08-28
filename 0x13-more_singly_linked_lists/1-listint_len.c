#include "lists.h"


/**
 * listint_len - Returns the number of elements in a linked listint_t list
 * @h: The head pointer
 *
 * Return: The number of elements in the list
 */


size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
