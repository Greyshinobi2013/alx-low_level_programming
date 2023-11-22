#include "main.h"
#include <stdio.h>

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
	int i;

	if (argc != 3)
	{
		printf("Error");
		return (1);
	}
	else if (argc < 4)
	{
		for (i = 1; i < argc; i++)
		{
			int multiplication += argv[i];

			printf("%d\n", multiplication);
		}

		return (0);
	}
}
