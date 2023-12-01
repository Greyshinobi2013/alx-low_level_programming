#include "function_pointers.h"
#include <stddef.h>
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
	f(name);
}
