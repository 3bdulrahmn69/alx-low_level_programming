#include "main.h"

/**
 * cap_string -  function that capitalizes all words of a string
 * @st: string
 * Return: char
 */
char *cap_string(char *st)
{
	char a[] = " \t\n,;.!?\"(){}";
	int i, l;

	while (*(st + i))
	{
		if (*(st + i) >= 'a' && *(st + i) <= 'z')
		{
			if (i == 0)
			{
				*(st + i) -= 'a' - 'A';
			}
			else
			{
				for (l = 0; l <= 12; l++)
				{
					if (a[l] == *(st + i - 1))
					{
						*(st + i) -= 'a' - 'A';
					}
				}
			}
		}
		i++;
	}
	return (st);
}
