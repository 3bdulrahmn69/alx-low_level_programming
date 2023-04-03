#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: char
 * @b: char
 * @n: int
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0 ; n > 0 ; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
