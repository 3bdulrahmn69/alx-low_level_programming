#include "main.h"
/**
 * print_sign - Program enter point
 * Return: Program 1 , 0 , -1
 * @n: is an n
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
