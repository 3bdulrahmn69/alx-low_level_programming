#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node
 * @head: list
 * @index: int
 * Return: 1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev;
	unsigned int i;

	if (head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
		return (1);
	}
	prev = *head;
	current = prev->next;
	for (i = 1; i < index && current != NULL; i++)
	{
		prev = current;
		current = current->next;
	}
	if (current == NULL)
	{
		return (-1);
	}
	prev->next = current->next;
	free(current);
	return (1);
}
