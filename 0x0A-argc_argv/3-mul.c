#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - Multiply two number
 *
 *@argc: Number of argument
 *@argv: Array of string
 *
 *Description: Print multiplication of two number
 *
 *Return: 1 if error
 */

int main(int argc, char *argv[])
{
	int i, multiplication = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc < 4)
	{
		for (i = 1; i < argc; i++)
		{
			multiplication *= atoi(argv[i]);

		}

		printf("%d\n", multiplication);

	}

	return (0);
}
