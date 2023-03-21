#include "main.h"

void print_alphabet(void);
{
	char ph;

	for (ph = 'a' ; ph <= 'z' ; ph++)
	{
		_putchar(ph);
	}
	_putchar('\n');
}

/**
 * main - Program enter point
 * Return: Program return
 */
int main(void)
{
	print_alphabet;
}
