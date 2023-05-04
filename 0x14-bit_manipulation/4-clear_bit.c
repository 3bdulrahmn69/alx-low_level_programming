#include "main.h"

/**
 * clear_bit - function that sets the value of a bit
 * @n: int
 * @index: int
 * Return: 1 , -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n &= ~(1UL << index);
	return (1);
}
