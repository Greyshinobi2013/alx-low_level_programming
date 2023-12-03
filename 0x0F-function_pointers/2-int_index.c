#include "function_pointers.h"

/**
 *int_index - search for integer
 *
 *@array: Pointer to array parameter
 *@size: Size of array parameter
 *@cmp: Pointer to function parameter
 *
 *Description: Search for integer
 *
 *Return: Index of array(int)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, result;

	if (size <= 0)
	{
		return (-1);
	}
	if (array == NULL || cmp == NULL)
	{
		exit(EXIT_FAILURE);
	}

	for (i = 0; i < (int)size; i++)
	{
		if ((cmp(array[i])) == 1)
		{
			result = i;
			break;
		}
		else if ((cmp(array[i])) == 0)
		{
			result = -1;
		}
	}
	return (result);
}
