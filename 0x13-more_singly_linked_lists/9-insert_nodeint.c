#include "lists.h"


/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: A pointer that points to the head pointer
 * @idx: The index of the list where the new node should be added
 * @n: The new integer to be added
 *
 * Return: The address of the new node
 */


listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *current = *head;
	listint_t *new_node;

	if (idx != 0)
	{
		while (current != NULL && count < (idx - 1))
		{
			current = current->next;
			count++;
		}
	}

	if (current == NULL && idx != 0)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}

	if (count == (idx - 1))
	{
		new_node->next = current->next;
		current->next = new_node;
	}

	return (new_node);
}
