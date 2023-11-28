#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * str_concat - Return two dimentional array pointer
 *
 *@width: Int parameter
 *@height: Int parameter
 *
 *Description: Return initialized two dimentional array pointer
 *
 *Return: Concatinated string
 */
int **alloc_grid(int width, int height)
{
	int *array[width][height];
	int i, j;

	if ((width == 0 || height == 0) || (width < 0 || height < 0))
	{
		return (NULL);
	}
	array[width][height] = malloc(sizeof(int) * (width * height));

	/*initialize the array*/
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			array[j][i] = 0;
		}
	}

	/*check if all the elements are initialized to '0'*/
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			if (array[j][i] != 0)
			{
				return (NULL);
			}
		}
	}

	return (array);
	free(array);
}
