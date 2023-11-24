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
	int i, l;

	n = malloc(size * sizeof(char));

	if ((int)size == 0 && n == NULL)
	{
		char error[25] = "failed to allocate memory";

		for (l = 0; l < 25; i++)
		{
			_putchar(error[l]);
			return (NULL);
		}
	}

	for (i = 0; i < (int)size; i++)
	{
		n[i] = c;
	}

	return (n);
}
