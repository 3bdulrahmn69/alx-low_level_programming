#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: string
 * @src: string
 * @n: int
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n && *(src + i) ; i++)
	{
		*(dest + i) = *(src + i);
	}
	for (i = 0 ; i < n ; i++)
	{
		*(dest + i) = '\0';
	}
	return (dest);
}
