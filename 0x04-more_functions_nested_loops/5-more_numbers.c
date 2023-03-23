#include "main.h"

/**
 * more_numbers - fun make nothing at all
 * Return: numbers num
 */
void more_numbers(void)
{
	int i, k;

	for (i = 0 ; i < 10 ; i++)
	{
		for (k = 0 ; k <= 14 ; k++)
		{
			if (k >= 10)
				putchar('1');
			putchar(k % 10 + '0');
		}
		_putchar('\n');
	}
}
