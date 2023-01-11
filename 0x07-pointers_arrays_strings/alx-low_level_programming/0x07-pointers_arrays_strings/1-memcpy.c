#include "main.h"

/**
 * _memcpy - Entry point
 *
 * Description: 'copies memory address'
 *
 * @dest: char input
 * @src: char input
 * @n: unsigned int input
 *
 * Return: char(Success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
