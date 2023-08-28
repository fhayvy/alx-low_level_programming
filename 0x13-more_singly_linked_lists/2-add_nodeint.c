#include "lists.h"


/**
 * add_nodeint - Adds a node at the begining of the listint_t list
 * @head: A pointer to the head pointer
 * @n: An Integer value
 *
 * Return: The address of the new element
 */


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
