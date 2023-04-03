#include "main.h"

/**
 * print_diagsums - sum of the two diagonals of a square matrix of integers
 * @a: arr
 * @size: int
 * Return:void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum, summ;

	for (i = 0 ; i < size ; i++)
	{
		sum += a[i];
		summ += a[size - i - 1];
		a += size;
	}
	printf("%i, %i\n", sum, summ);
}
