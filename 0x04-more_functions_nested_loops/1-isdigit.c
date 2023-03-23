#imclude "main.h"

/**
 * _isdigit - the fun to make fun
 * Return: 1 , 0
 * @c: is an CcC
 */
int _isdigit(int c)
{
	int k;

	k = c % 10;
	if (k >= 0 && k <= 9)
		return (1);
	else
		return (0);
}
