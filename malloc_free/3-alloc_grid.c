#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array
 *@width: width of the array
 *@height: height of the array
 *Return: pointer to the two dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i = 0, j = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(int *) * height);
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	while (i < height)
	{
		array[i] = malloc(sizeof(int) * width);
		i++;
	}
	i = 0;
	while (i < height)
	{
		while (j < width)
		{
			array[i][j] = 0;
			j++;
		}
		i++;
	}
	return (array);
}
