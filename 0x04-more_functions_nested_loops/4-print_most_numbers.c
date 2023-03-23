#include "main.h"

/**
 * print_most_numbers - print numbers
 * Return: only print
 */
void print_most_numbers(void)
{
	char i;

	for (i = '0' ; i <= '9' ; i++)
	{
		if (!(i == '4') || !(i == '2'))
			_putchar(i);
	}
	_putchar('\n');
}
