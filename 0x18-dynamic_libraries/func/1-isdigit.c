#include "main.h"

/**
 * _isdigit - the fun to make fun
 * Return: 1 , 0
 * @c: is an CcC
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
