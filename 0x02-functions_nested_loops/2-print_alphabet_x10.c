#include "main.h"
/**
 * print_alphabet_x10 - Program enter point
 * Return: Program return
 */
void print_alphabet_x10(void)
{
	char a;
	int i;

	while (i < 10)
	{
		for (a = 'a' ; a <= 'z' ; a++)
			_putchar(a);
		_putchar('\n');
		i++;
	}
}
