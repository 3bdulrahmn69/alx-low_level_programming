#include "lists.h"

/**
 * free_dlistint - free a dlistint_t list
 * @head: pointer to the linked list beginning
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
