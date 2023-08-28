#include "lists.h"


/**
 * free_listint - Frees a listint_t list
 * @head: The head pointer
 */


void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;

		free(current);
	}
}
