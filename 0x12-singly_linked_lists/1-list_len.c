#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked
 * @h: list
 * Return: the number of elements in a linked
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
