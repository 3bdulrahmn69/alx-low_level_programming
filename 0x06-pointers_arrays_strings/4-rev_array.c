#include "main.h"

/**
 * reverse_array -  function that reverses the content of an array of integers
 * @a: int
 * @n: int
 * Return: int
 */
void reverse_array(int *a, int n)
{
	int i, len = 0;

	for (i = 0 ; i < n ; i++)
	{
		len++;
	}
	for (i = 0 ; i <= len ; i++)
	{
		printf("%d\n", a[len - i]);
	}
}
