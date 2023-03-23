#include "main.h"

/**
 * print_diagonal - main main
 * Return: hey hey
 * @n: in an NnnnN
 */
void print_diagonal(int n)
{
	int i, k;
	
	if (n <= 0)
		_putchar('\n');
	for (i = 1 ; i <= n ; i++)
	{
		for(k = 0 ; k < i ; k++)
		{
		_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
