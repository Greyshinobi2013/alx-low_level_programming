#include "main.h"

/**
 *_sqrt_recursion- Return square root of a number
 *
 *@n: Int parameter
 *
 *Description: Returns natural square root of a number
 *
 *Return: square root of number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		int result = (int)isqrt(n);

		if (result * result == n)
		{
			return (result);
		}
		else
		{
			return (-1);
		}
		if (n == 0 || n == 1)
		{
			return (n);
		}
		else
		{
			return (sqrt_helper(n, 1, n));
		}
	}
}
/**
 *sqrt_helper - Finds the square root of a number using binary search.
 *@n: The number to find the square root of.
 *@start: The starting value of the search range.
 *@end: The ending value of the search range.
 *
 *Return: Root of the number, or -1 if it does not have a natural quare root.
 */
int sqrt_helper(int n, int start, int end)
{
	int mid = (start + end) / 2;

	if (mid * mid == n)
	{
		return (mid);
	}
	else if (mid * mid > n)
	{
		return (sqrt_helper(n, start, mid - 1));
	}
	else if ((mid + 1) * (mid + 1) > n)
	{
		return (mid);
	}
	else
	{
		return (sqrt_helper(n, mid + 1, end));
	}
}
/**
 * isqrt - Calculates the integer square root of a number.
 * @x: The number to calculate the square root of.
 *
 * Return: The integer square root of the number.
 */
unsigned int isqrt(unsigned int x)
{
	if (x == 0 || x == 1)
	{
		return (x);
	}
	else
	{
		unsigned int r = isqrt(x / 4) * 2;
		unsigned int r_squared = r * r;

		if (r_squared > x)
		{
			return (r - 1);
		}
		else if (r_squared == x)
		{
			return (r);
		}
		else
		{
		return (r + 1);
		}
	}
}
