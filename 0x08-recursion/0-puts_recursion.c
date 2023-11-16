#include "main.h"
#include <string.h>

/**
 *_puts_recursion - Prints out String
 *
 *@s: String input
 *
 *Description: Takes in string parameter and print out String
 *
 *Return: none
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
		_putchar(*s);
	_puts_recursion(s + 1);
}
