#include "main.h"
#include <stdio.h>
/**
 *main - Print all passed in arguments
 *
 *@argc: Number of argument
 *@argv: Array of string
 *
 *Description: Print all of the passed arguments line after line
 *
 *Return: Zero
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
