#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatinate two strings
 *
 *@s1: String parameter
 *@s2: String parameter
 *
 *Description: Concatinate two strings
 *
 *Return: Concatinated string
 */

char *str_concat(char *s1, char *s2)
{

	char *final;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	final = malloc(strlen(s1) + strlen(s2) + 1);

	if (final == NULL)
	{
		return (NULL);
	}

	strcpy(final, s1);
	strcat(final, s2);

	return (final);
}
