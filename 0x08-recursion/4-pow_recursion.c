#include "main.h"

/**
 *_pow_recursion - Return power of x raised to y
 *
 *@x: Int parameter
 *@y: Int parameter
 *
 *Description:  returns the value of x raised to the power of any number y
 *
 *Return: Powered value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
