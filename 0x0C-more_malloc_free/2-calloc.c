#include "main.h"

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: int
 * @size: int
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int nu;
	char *ch;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ch = malloc(nmemb * size);
	if (ch == NULL)
	{
		return (NULL);
	}
	for (nu = 0; nu < (nmemb * size); nu++)
	{
		ch[nu] = 0;
	}
	return (ch);
}
