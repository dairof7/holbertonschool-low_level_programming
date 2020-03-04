#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - memory alloc matrix
 * @width: colums (int)
 * @height: rows (int)
 *
 * Return: pointer to new matrix
 */
int **alloc_grid(int width, int height)
{
	int i = 0, j = 0;
	int **matrix;

	matrix = (int **) malloc(height * sizeof(int *));

	if (width <= 0 || height <= 0)
		return (NULL);

	if (matrix == NULL)
		return (matrix);

	for (i = 0; i < height; i++)
	{
		matrix[i] = (int *) malloc(width * sizeof(int));

		if (matrix[i] == NULL)
		{
			return (matrix);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			matrix[i][j] = 0;

	return (matrix);
}