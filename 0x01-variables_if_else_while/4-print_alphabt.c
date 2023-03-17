#include <stdio.h>
/**
 * main - no no no
 * Return: hey ss
 */
int main(void)
{
	char ec;

	for (ec = 'a' ; ec <= 'z' ; ec++)
	{
		if (ec != 'q' && ec != 'e')
			putchar(ec);
	}
	putchar('\n');
	return (0);
}
