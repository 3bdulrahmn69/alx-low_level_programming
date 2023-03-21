#include "main.h"
/**
 * main - Program enter point
 * Return: Program return
 * @n: is an n n n
 */
int print_last_digit(int n)
{
	int k;

	k = n % 10;
	if (n < 0)
		k = -k;
	_putchar(k + '0');
	return (0);
}
