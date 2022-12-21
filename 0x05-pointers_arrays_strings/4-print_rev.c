#include "main.h"

/**
 * print_rev - Entery point
 *
 * @s : recieves a string
 *
 * Return: nothing if Successful
 */

void print_rev(char *s)
{
	int arraySize = sizeof(s);
	int i;

	for (i = arraySize + 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
