#include <stdio.h>
/**
 * main - no no no
 * Return: hey ss
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9 ; i++)
	{
		putchar(i + '0');
		if ( i != 9 )
		{
		putchar(',');
		putchar(' ');
		}
	}
	putcahr('\n');
	return (0);
}
