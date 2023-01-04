#include "main.h"

/**
 * _memcpy - Entry point
 *
 * @dest: char
 * @src: char
 * @n: unsigned int
 *
 * Return - char(success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
