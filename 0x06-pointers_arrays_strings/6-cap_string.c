#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @st: string
 * Return: chr
 */
char *cap_string(char *st)
{
	int i, l;
	char a[] = " \t\n,;.!?\"(){}";

	for (i = 0; st[i] != '\0'; i++)
	{
		if (i == 0 && st[i] >= 'a' && st[i] <= 'z')
		{
			st[i] -= 32;
		}
		for (l = 0; l < 12; l++)
		{
			if (st[i] == a[l])
			{
				if (st[i + 1] >= 'a' && st[i + 1] <= 'z')
				{
					st[i + 1] -= 32;
				}
			}
		}
	}
}
