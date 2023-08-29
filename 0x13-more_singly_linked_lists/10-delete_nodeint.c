#include "lists.h"


/**
 * delete_nodeint_at_index - Deletes the node at index index of a listint_t LL
 * @head: A pointer to the head pointer
 * @index: The index of the node that should be deleted
 *
 * Return: 1 if it suceeded and -1 if otherwise
 */


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current = *head;
	listint_t *temp;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
		return (1);
	}

	while (current != NULL)
	{
		if (i == index - 1)
		{
			temp = current->next;
			current->next = temp->next;
			free(temp);
			return (1);
		}
		i++;
		current = current->next;
	}

	return (-1);
}
