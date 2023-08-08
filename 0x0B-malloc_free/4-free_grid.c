#include "main.h"

/**
 * free_grid - Entry point
 * @grid: para
 * @height: para
 * Return: void
*/

void free_grid(int **grid, int height)
{
	int i = 0;

	for(; i < height; i++)
		free(grid[i]);
	free(grid);
}
