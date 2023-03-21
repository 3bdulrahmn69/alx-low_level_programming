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

	_putchar(k + '0');
	return (k);
}
