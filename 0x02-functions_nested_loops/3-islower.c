#include "main.h"

/**
 * _islower - checks for lowercase letter
 *
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int _islower(int c)
{
	if ( c >= 'a' && c <= 'z')
	{
		return _putchar('1');
	}
	else
	{
		return _putchar('0');
	}
}
