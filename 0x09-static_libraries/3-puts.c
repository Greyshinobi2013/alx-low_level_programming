#include "main.h"
#include <string.h>

/**
 *_puts - Print string
 *
 *@s: String parameter
 *
 *Return: Nothing
 */

void _puts(char *s)
{
	int length = strlen(s);

	for (int i = 0; i < length; i++)
	{
		_putchar(s);
	}
}
