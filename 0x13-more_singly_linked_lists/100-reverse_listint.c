#include "lists.h"


/**
 * reverse_listint - Reverses a listint_t LL
 * @head: A pointer pointing to the head pointer
 *
 * Return: A pointer to the first node of the reversed LL
 */


listint_t *reverse_listint(listint_t **head)
{
	listint_t *next = NULL;
	listint_t *prev = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;
	return (*head);
}
