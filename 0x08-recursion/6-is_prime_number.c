#include "main.h"

/**
 *is_prime_number - Returns 1 if the input integer is a prime number
 *
 *@n: Int parameter
 *
 *Description: Returns 1 if the input is a prime number, otherwise return 0
 *
 *Return: Int value
 */
int is_prime_number(int n)
{
	unsigned int m = (unsigned int)n;

	if (n == 1 || n == m)
	{
		return (1);
	}
	else if (n % 2 != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
