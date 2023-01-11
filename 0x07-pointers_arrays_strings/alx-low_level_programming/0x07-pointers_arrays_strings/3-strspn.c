#include "main.h"

/**
 * _strspn - Entry point
 *
 * Description: 'gets the length of a prefix substring'
 *
 * @s: char input
 * @accept: char input
 *
 * Return: unsigned int(Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
