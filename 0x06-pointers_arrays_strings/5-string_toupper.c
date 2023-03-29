#include "main.h"

/**
 * string_toupper - function that changes lowercase` to uppercase
 * Return: char
 * @st: hey
 */
char *string_toupper(char *st)
{
	int i;

	for (i = 0 ; st[i] != '\0' ; i++)
	{
		if (st[i] >= 'a' && st[i] <= 'z')
		{
			st[i] = st[i] - 32;
		}
	}
	return (st);
}
