#include "main.h"

/**
 * main - check the code
 *
 *@s: starting address of memory to be filled
 *@b: value to be filled
 *@n: number of bytes to be filled
 *
 * Return: poiner.
 */

char *_memset(char *s, char b, unsigned int n)
{
	return memset(*s, b, n);
}

