#include "main.h"

/**
 *print_name - Print name
 *
 *@name: String parameter
 *@f: Pointer to function parameter
 *
 *Description: Prints a name
 *
 *Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
