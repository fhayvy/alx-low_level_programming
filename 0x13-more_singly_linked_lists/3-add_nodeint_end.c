#include "lists.h"



/**
 * add_nodeint_end - Adds a new node to the end of a listint_t list
 * @head: A pointer to the head pointer
 * @n: The new integer value to be added
 *
 * Return: The address of the new node
 */


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *current;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
	}

	return (new_node);
}
