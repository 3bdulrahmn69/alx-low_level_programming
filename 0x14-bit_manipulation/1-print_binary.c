#include "main.h"

/**
 * print_binary - function that prints the binary
 * @n: int
 * Return: 0
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int printed = 0;

	while (mask)
	{
		if (n & mask)
		{
			_putchar('1');
			printed = 1;
		}
		else if (printed)
		{
			_putchar('0');
		}
		mask >>= 1;
	}
	if (!printed)
	{
		_putchar('0');
	}
}
