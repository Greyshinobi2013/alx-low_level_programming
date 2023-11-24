#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *_strdup - Return a pointer to a newly allocated space in memory
 *
 *@str: String parameter
 *
 *Description: Create and initialize char array
 *
 *Return: character pointer
 */
char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}

	int i;
	char *duplicateStr;
	int size = strlen(str) + 1;

	duplicateStr = malloc(size * sizeof(char));

	if (size == 0 || duplicateStr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		duplicateStr[i] = str[i];
	}

	return (duplicateStr);
}
