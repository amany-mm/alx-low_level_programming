#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *
 * @width: columns
 * @height: rows
 *
 * Each element of the grid should be initialized to 0
 *
 * Return: return NULL on failure
 * If width or height is 0 or negative, return NULL
*/

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	/* validate input */
	if (width <= 0 || height <= 0)
		return (NULL);

	/* allocate memory for rows */
	grid = malloc(height * sizeof(int *));

	/* validate memory */
	if (grid == NULL)
		return (NULL);

	/* allocate memory for columns of each row */
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));

		/* validate memory */
		if (grid[i] == NULL)
		{
			for (i = 0; i < height; i++)
				free(grid[i]);

			free(grid);
			return (NULL);
		}

		/* set array values to 0 */
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
