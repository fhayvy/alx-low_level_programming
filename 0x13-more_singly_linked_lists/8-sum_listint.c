#include "lists.h"


/**
 * sum_listint - Returns the sum of all the data in a listint_t LL
 * @head: The head pointer
 *
 * Return: 0 if the list is empty
 */


int sum_listint(listint_t *head)
{
	listint_t *current = head;
	int value = 0;
	unsigned int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (current != NULL)
	{
		value = current->n;
		sum += value;
		current = current->next;
	}

	return (sum);
}
