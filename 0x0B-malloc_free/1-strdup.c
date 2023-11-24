#include "main.h"
#include <stdlib.h>
/**
 *_strdup - Return a pointer to a newly allocated space in memory
 *
 *@str: String parameter
 *
 *Description: Create and initialize char array
 *
 *Return: character pointer
 */
char *strdup(char *str)
{
	int i;
	char *duplicateStr;
	int size = strlen(str);

	duplicateStr = malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		duplicateStr[i] = str[i];
	}
	if (duplicateStr == NULL)
	{
		return (NULL);
	}

	return duplicateStr
}
