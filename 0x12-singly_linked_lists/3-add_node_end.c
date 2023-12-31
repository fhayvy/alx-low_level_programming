#include "lists.h"


/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: Head of the linked list
 * @str: String to store in the list
 *
 * Return: The address of the new element
 */


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *temp;

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = NULL;
	temp = *head;

	if (temp == NULL)
		*head = new_node;

	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}

	return (*head);
}
