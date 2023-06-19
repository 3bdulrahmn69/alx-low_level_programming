#include "main.h"
/**
 * _islower - Program enter point
 * Return: Program return
 * @c: hey its c
 */
int _islower(int c)
{
	if (c <= 122 && c >= 97)
		return (1);
	else
		return (0);
}
