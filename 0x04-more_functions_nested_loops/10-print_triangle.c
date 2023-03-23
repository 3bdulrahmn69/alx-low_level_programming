#inclde "main.h"

/**
 * print_triangle - print triangle
 * Return: a b c d e f g h i j k l m n o p q r s t u v w x y z
 * @size: size
 */
void print_triangle(int size)
{
	int i, s, b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0 ; i <= size ; i++)
		{
			for (s = size - i ; s >= 1 ; s--)
			{
				_putchar(' ');
			}
			for (b = 1 ; b <= i ; b++)
			{
				_putchar('#');
			}
			putchar('\n');
		}
	}
}
