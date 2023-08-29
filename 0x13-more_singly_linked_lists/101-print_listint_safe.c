#include "lists.h"


/**
 * free_listp - Frees a linked list
 * @head: Head of the list
 *
 * Return: Void
 */


void free_listp(listp_t **head)
{
	listp_t *temp;
	listp_t *current;

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
 * @head: The head pointer
 *
 * Return: The number of nodes in the list
 */


size_t print_listint_safe(const listint_t *head)
{
	size_t nnodes = 0;
	listp_t *head_ptr, *new, *add;

	head_ptr = NULL;

	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = head_ptr;
		head_ptr = new;

		add = head_ptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&head_ptr);
				return (nnodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nnodes++;

	}

	free_listp(&head_ptr);
	return (nnodes);
}
