#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @st: string
 * Return: char
 */
char *leet(char *st)
{
	int i, j;
	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (i = 0; st[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (st[i] == a[j])
			{
				st[i] = b[j];
			}
		}
	}
}
