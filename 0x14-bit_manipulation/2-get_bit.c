#include "main.h"

/**
 * get_bit -  function that returns the value of a bit at a given index
 * @n: int
 * @index: int
 * Return: 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
