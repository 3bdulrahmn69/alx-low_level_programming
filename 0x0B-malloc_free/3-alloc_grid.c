#include "main.h"

/**
 * alloc_grid - function that returns a pointer to a 2
 * @width: int
 * @height: int
 * Return: int
 */
int **alloc_grid(int width, int height)
{
	int i, j, **k;

	k = malloc(sizeof(*k) * height);

	if (width <= 0 || height <= 0 || k <= 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0 ; i < height ; i++)
		{
			k[i] = malloc(sizeof(**k) * width);
			if (k[i] == 0)
			{
				while (i--)
				{
					free(k[i]);
				}
				free(k);
				return (NULL);
			}
			for (j = 0; j < width ; j++)
			{
				k[i][j] = 0;
			}
		}
	}
	return (k);
}
