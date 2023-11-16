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
	int i;
	for (i = 0; i < (int)strlen(s);i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
