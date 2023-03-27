#include "main.h"

/**
 * _strcpy - hey there
 * @dest: an dest
 * @src: an src
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0 ; src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
