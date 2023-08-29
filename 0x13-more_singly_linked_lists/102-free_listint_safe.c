#include "lists.h"


/**
 * free_listp2 - Frees a linked list
 * @head: Head of the LL
 */

void free_listp2(listp_t **head)
{
	listp_t *temp, *current;

	if (head != NULL)
	{
		current = *head;
		while ((temp = current) != NULL)
		{
			current = current->next;
			free(temp);
		}
		*head = NULL;
	}
}


/**
 * print_listint_safe - Prints a listint_t LL
 * @h: The head pointer
 *
 * Return: The number of nodes in the list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t nnodes = 0;
	listp_t *head_ptr, *new, *add;
	listint_t *current;

	head_ptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = head_ptr;
		head_ptr = new;

		add = head_ptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp2(&head_ptr);
				return (nnodes);
			}
		}

		current = *h;
		*h = (*h)->next;
		free(current);
		nnodes++;
	}

	*h = NULL;
	free_listp2(&head_ptr);
	return (nnodes);
}
