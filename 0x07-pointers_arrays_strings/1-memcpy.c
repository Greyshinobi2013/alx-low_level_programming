#include "main.h"

/**
 * _memcpy - Entry point
 *
 * Description: copies memory area
 *
 * @dest: first input
 * @src: Second input
 * @n: third input
 *
 * Return - char (success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return memcpy(dest,src,n);
}
