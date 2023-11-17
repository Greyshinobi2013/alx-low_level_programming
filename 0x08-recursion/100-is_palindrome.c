#include "main.h"
#include <string.h>
/**
 *is_palindrome - Returns 1 if a string is a palindrome and 0 if not
 *
 *@s: String parameter
 *
 *Description: Returns 1 if a string is a palindrome and 0 if not.
 *
 *Return: Int value
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	return (is_palindrome_helper(s, 0, len - 1));
}

/**
 * is_palindrome_helper - Checks if a substring of a string is a palindrome.
 * @s: The string to check.
 * @start: The starting index of the substring to check.
 * @end: The ending index of the substring to check.
 *
 * Return: 1 if the substring is a palindrome, 0 otherwise.
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	else if (s[start] != s[end])
	{
		return (0);
	}
	else
	{
	return (is_palindrome_helper(s, start + 1, end - 1));
	}
}
