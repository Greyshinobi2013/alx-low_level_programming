#include "main.h"

/**
 * _strpbrk - Entry point
 *
 * Description: 'searches a string for any of a set of bytes'
 *
 * @s: character input
 * @accept: character input
 *
 * Return: char(Success)
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
