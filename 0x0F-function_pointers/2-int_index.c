#include "function_pointers.h"
#include <stdlib.h>
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
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < (int)size; i++)
	{
		if ((cmp(array[i])) != 0)
		{
			return (i);

		}
	}
	return (-1);
}
