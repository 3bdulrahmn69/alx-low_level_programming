#include "main.h"

/**
 * _strdup - function that returns a pointer to a newly allocated
 * @str: char
 * Return: char
 */
char *_strdup(char *str)
{
	int i, size;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}
	for (size = 0; str[size] != '\0'; )
	{
		size++;
	}
	ptr = malloc(size * sizeof(*str) + 1);

	if (ptr == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0 ; i < size ; i++)
		{
			ptr[i] = str[i];
		}
	}
	return (ptr);
}
