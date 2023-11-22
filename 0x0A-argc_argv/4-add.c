#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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

	int sum = 0, i;

	if (argc == 1)
	{
		printf("%d\n", sum);
	}
	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) != 0 && atoi(argv[i]) > 0)
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
