#include "main.h"
#include <stdio.h>
/**
 *main - print argv and argc
 *
 *@argc: Number of argument
 *@argv: Array of string
 *
 *Description: Print number of arguments
 *
 *Return: 0 if successful, 1 if unsuccessful
 */
int main(int argc, char *argv[])
{
	int numberOfArguments = argc - 1;

	printf("%d\n", numberOfArguments);
	return (0);
}
