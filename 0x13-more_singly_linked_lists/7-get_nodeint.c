#include "lists.h"


/**
 * get_nodeint_at_index - Returns the nth node of the LL
 * @head: The head pointer
 * @index: The index of the code starting at 0
 *
 * Return: Null if the code doesn't exist
 */


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	listint_t *current = head;

	if (head == NULL)
	{
		return (NULL);
	}

	while (current != NULL)
	{
		if (counter == index)
		{
			return (current);
		}
		counter++;

		current = current->next;
	}

	return (NULL);
}
