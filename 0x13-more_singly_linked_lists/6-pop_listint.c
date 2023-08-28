#include "lists.h"


/**
 * pop_listint - Deletes the head node of a listint_t list
 * @head: A pointer to the head pointer
 *
 * Return: 0 if the linked list is empty
 */


int pop_listint(listint_t **head)
{
	int new_n;
	listint_t *temp, *current;

	if (*head == NULL)
		return (0);

	current = *head;
	new_n = current->n;

	temp = current->next;
	free(current);

	*head = temp;

	return (new_n);
}
