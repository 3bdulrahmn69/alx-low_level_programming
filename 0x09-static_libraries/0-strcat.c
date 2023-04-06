#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: string
 * @src: string
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int dlen = 0, slen = 0, i;

	for (i = 0 ; dest[i] != '\0' ; i++)
	{
		dlen++;
	}
	for (i = 0 ; src[i] != '\0' ; i++)
	{
		slen++;
	}
	for (i = 0 ; i <= slen ; i++)
	{
		dest[dlen + i] = src[i];
	}
	return (dest);
}
