#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: int
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	int *ma = malloc(b);

	if (ma == 0)
	{
		exit(98);
	}
	return (ma);
}
