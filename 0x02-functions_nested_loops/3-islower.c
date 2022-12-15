#include "main.h"

/**
 * _islower - Entry point
 * @c: input parameter
 * Description: _islower
 * Return: Always 0 (success)
 */
int _islower(int c)
{
	if (c >= 'a' || c <= 'z')
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
	return (0);
}
