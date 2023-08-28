#include "lists.h"


/**
 * free_listint2 - Frees a listint_t list
 * @head: A pointer to the head pointer
 */


void free_listint2(listint_t **head)
{
	listint_t *current;

	while (*head != NULL)
	{
		current = *head;
		*head = current->next;

		free(current);
	}

	*head = NULL;
}
