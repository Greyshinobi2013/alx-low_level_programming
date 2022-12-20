#include "main.h"
/**
 *swap_int - Entry point
 *
 *@a: first input
 *@b: Second input
 *
 * Return - Nothing 
 */

void swap_int(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;

}
