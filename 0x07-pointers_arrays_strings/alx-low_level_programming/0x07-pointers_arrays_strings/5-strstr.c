#include "main.h"

/**
 * _strstr - Entry point
 *
 * Description: 'locates a substring'
 *
 * @haystack: character input
 * @needle: character input
 *
 * Return: char(Success)
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
