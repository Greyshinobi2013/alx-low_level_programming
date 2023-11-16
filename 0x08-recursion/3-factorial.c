#include "main.h"

/**
 *factorial - Return factorial of number
 *
 *@n: Int parameter
 *
 *Description: Calculate and return factorial of a given number
 *
 *Return: Factorial of number
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
