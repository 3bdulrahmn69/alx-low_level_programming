#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a linked list
 * @head: list
 * @index: node index
 * Return: the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int count = 0;

	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}
	return (current);
}
