#include "main.h"

/**
 * pr_checker - checker
 * @x: int
 * @y: int
 * Return: int
 */

int pr_checker(int x, int y)
{
	if (y < 2 || y % x == 0)
	{
		return (0);
	}
	else if (x > y / 2)
	{
		return (1);
	}
	else
	{
		return (pr_checker(x + 1, y));
	}
}

/**
 * is_prime_number - function that check if the input integer is a prime number
 * @n: int
 * Return: int
 */
int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	return (pr_checker(2, n));
}
