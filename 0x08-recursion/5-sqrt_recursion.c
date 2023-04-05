#include "main.h"
/**
 * sqrt_checker - checker
 * @x: int
 * @y: int
 * Return: int
 */
int sqrt_checker(int x, int y)
{
	if (x * x == y)
	{
		return (x);
	}
	else if (x * x > y)
	{
		return (-1);
	}
	return (sqrt_checker(x + 1, y));
}
/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: int
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (sqrt_checker(1, n));
}
