#include "main.h"

/**
 * int _strlen - length of a string
 * @s: string ting
 * Return: length of a string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s++ ; )
	{
		i++;
	}
	return(i);
}
