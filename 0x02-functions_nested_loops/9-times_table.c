#include "main.h"
/**
 * times_table - Program enter point
 * Return: Program return
 */
void times_table(void)
{
	int n, m, x;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');

		for (m = 1; m <= 9; m++)
		{
			_putchar(',');
			_putchar(' ');

			x = n * m;

			if (x <= 9)
				_putchar(' ');
			else
				_putchar((x / 10) + '0');

			_putchar((x % 10) + '0');
		}
		_putchar('\n');
	}
}
