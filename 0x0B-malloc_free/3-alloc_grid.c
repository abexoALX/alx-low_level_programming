#include "main.h"
/**
***alloc_grid - returns a pointer to a 2 dimensional array of integers.
*@width: int
*@height: int
*Return: 2d array
*/
int **alloc_grid(int width, int height)
{
int **x, i, j;
x = malloc(sizeof(*x) * height);
if (width <= 0 || height <= 0 || x == 0)
	return (NULL);
else
{
	for (i = 0; i < height; i++)
	{
		x[i] = malloc(sizeof(**x) * width);
		if (x[i] == 0)
		{
			while (i--)
				free(x[i]);
			free(x);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			x[i][j] = 0;
	}
}
return (x);
}
