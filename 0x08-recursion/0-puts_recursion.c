#include "main.h"

/**
 * _puts_recursion - function that prints a string, followed by a new line
 * @s: String to print
 * Return: String
 */
void _puts_recursion(char *s)
{
	while (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
		_putchar('\n');
		break;
	}
}
