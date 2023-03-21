#include "main.h"
/**
 * print_last_digit - Program enter point
 * Return: Program return
 * @n: is an n n n
 * Description: 'the program's description
 */
int print_last_digit(int n)
{
	int k;

	k = n % 10;
	if (k < 0)
		k = k * -1;
	_putchar(k + '0');
	return (k);
}
