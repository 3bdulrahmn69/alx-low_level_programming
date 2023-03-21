#include "main.h"
/**
 * main - Program enter point
 * Return: Program return
 */
int main(void)
{
	print_alphabet_x10();
	return (0);
}

void print_alphabet_x10(void)
{
	char a;
	int i;

	while (i <= 10)
	{
		for (a = 'a' ; a <= 'z' ; a++)
			_putchar(a);
		i++;
	}
	_putchar('\n');
}
