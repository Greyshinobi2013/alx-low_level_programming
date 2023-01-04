#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: char
 * @src: char
 * @n: unsigned int
 *
 * Return - char.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
