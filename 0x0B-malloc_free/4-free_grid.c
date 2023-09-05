#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously
 * created by your alloc_grid function.
 *
 * Note that we will compile with your alloc_grid.c file.
 * Make sure it compiles.
 *
 * @grid: pointer to 2D array
 * @height: array height
 *
 *
 * Return: NULL
*/

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		free(grid);

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);

}
