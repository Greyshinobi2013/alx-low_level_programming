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
	int i, j, sizeS1, sizeS2;
	char *copyS1, *copyS2;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}

	sizeS1 = strlen(s1) + 1;
	sizeS2 = strlen(s2) + 1;

	copyS1 = malloc(sizeS1 + sizeS2);
	copyS2 = malloc(sizeS2);

	for (i = 0; i < sizeS1; i++)
	{
		copyS1[i] = s1[i];
	}

	if (s1 != NULL && S2 == NULL)
	{
		return (copyS1);
	}

	for (j = 0; j < sizeS2; j++)
	{
		copyS2[j] = s2[j];
	}

	if (s1 == NULL && S2 != NULL)
	{
		return (copyS2);
	}

	strcat(copyS1, copyS2);
	return (copyS1);
}
