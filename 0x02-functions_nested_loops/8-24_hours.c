#include "main.h"
/**
 * main - Program enter point
 * Return: Program return
 */
void jack_bauer(void)
{
	int h, m;

	for(h = 0; h <= 23 ; h++)
	{
		for(m = 0; m <=59 ; m++)
		{
			_putchar(h + '0');
			_putchar(':');
			_putchar(m + '0');
			_putchar('\n');
		}
	}
}
