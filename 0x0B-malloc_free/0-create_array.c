#include "main.h"
#include <stdlib.h>
/**
 *create_array -  Creates and initialize array char
 *
 *@size: Unsigned integer
 *@c: character
 *
 *Description: Create and initialize char array
 *
 *Return: character pointer
 */

char *create_array(unsigned int size, char c)
{
	char *n;
	int i;

	n = malloc(size * sizeof(char));

	if ((int)size == 0)
	{
		return (NULL);
	}

	for (i = 0; i < (int)size; i++)
	{
		n[i] = c;
	}
	if (n == NULL)
	{
		return (NULL);
	}
	return (n);
	free(n);

}
