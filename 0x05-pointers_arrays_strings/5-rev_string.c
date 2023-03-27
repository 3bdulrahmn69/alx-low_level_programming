#include "main.h"

/**
 * rev_string - revvv
 * @s: sss
 * Return: voide
 */
void rev_string(char *s)
{
	int x = 0, y = 0, z;
	char c;

	while (s[x] != '\0')
	{
		x++;
	}
	y = x - 1;
	for (z = 0 ; y >= 0 && z < y ; y--, z++)
	{
		c = s[z];
		s[z] = s[y];
		s[y] = c;
	}
}
