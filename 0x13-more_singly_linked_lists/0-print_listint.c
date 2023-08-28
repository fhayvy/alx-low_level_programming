#include "lists.h"


/**
 * print_listint - Prints all the elements of a listint list
 * @h: The head pointer
 *
 * Return: Number of nodes
 */


size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
