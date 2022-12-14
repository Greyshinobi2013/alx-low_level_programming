#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int count;
	char message[] = "_putchar";
	
	for (count = 0; count <= 8; count++)
	{
	if (message[count] == '\0')
	{
	_putchar('\n');
	break;
	}
	else
		_putchar(message[count]);
	}
	return (0);
}
