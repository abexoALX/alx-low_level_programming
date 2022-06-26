#include <main.h>
/**
*free_grid - free the grid
*@grid: grid of memories
*@height: int
*Return: void
*/
void free_grid(int **grid, int height)
{
int k = 0;
for (; k < height; k++)
	free(grid[k]);
free(grid);
}
