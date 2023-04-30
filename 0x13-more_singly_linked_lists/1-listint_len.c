#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked
 * @h: linked list
 * Return: number of elements in a linked
 */
size_t listint_len(const listint_t *h)
{
	size_t num_nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		num_nodes++;
	}
	return (num_nodes);
}
