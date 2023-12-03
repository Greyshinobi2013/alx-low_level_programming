#include "function_pointers.h"

/**
 *array_iterator - execute function given as parameter *
 *@array: String pointer parameter
 *@size: size_t type parameter
 *@action: Pointer to function parameter
 *
 *Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < (int)size; i++)
	{
		action(array[i]);
	}
}

