#include "main.h"

/**
 * puts_half - hsss
 * @str: hsss
 * Return: void
 */
void puts_half(char *str)
{
	int i = 0, x;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i + 1 % 2 != '0')
	{
		x = (i - 1) / 2;
	}
	else
	{
		x = (i / 2);
	}
	x++;
	for (i = x ; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
