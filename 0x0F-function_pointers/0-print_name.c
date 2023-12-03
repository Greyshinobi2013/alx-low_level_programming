#include "function_pointers.h"
#include <stdlib.h>
/**
 *print_name - Print name
 *
 *@name: String parameter
 *@f: Parameter that points to other pointer
 *
 *Description: Print a name
 *
 *Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
	{
		exit(EXIT_FAILURE);
	}

	f(name);
}
