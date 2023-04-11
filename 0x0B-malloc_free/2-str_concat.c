#include "main.h"

/**
 * str_concat - function that concatenates two strings
 * @s1: char
 * @s2: char
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i = 0, j = 0, k = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] || s2[i] ; i++)
	{
		j++;
	}
	str = malloc(sizeof(char) * j);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; s1[i] ; i++)
	{
		str[k++] = s1[i];
	}
	for (i = 0 ; s2[i] ; i++)
	{
		str[k++] = s2[i];
	}
	return (str);
}
