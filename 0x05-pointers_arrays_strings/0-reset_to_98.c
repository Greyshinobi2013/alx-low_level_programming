#include "main.h"

/**
 *
 *main -
 *
 *Return: (0) if successful
 */

void reset_to_98(int *n)
{
	*n = 98;
	int digit[]="";
	digit = *n;
	for(i = 0; i < 2; i++)
	{
	_putchar(digit[i]);
	}
}
