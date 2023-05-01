#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data (n)
 * @head: list
 * Return: um of all the data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	if (head == NULL)
	{
		return (0);
	}
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
