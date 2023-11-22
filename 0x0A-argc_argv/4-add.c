#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main - Print sum of posetive numbers
 *
 *@argc: Number of argument
 *@argv: Array of string
 *
 *Description: Print addition of two posetive numbers
 *
 *Return: int
 */

int main(int argc, char *argv[])
{

	int sum = 0, i, j;

	if (argc == 1)
	{
		printf("%d\n", sum);
	}
	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			char *arg = argv[i];

			for (j = 0; arg[j] != '\0'; j++)
			{
				if (!isdigit(arg[j]) || atoi(arg) < 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
