#include "main.h"

/**
 * _islower - checks if c is lowercase letter or not
 *
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
	return (0);
}
