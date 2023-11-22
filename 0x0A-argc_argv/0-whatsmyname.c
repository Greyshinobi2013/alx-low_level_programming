#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 *main - print argv and argc
 *
 *@argc: Number of argument
 *@argv: Array of string
 *
 *Description: Print the name of the file
 *
 *Return: Zero
 */

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
