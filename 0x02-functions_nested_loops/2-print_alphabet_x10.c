#include "main.h"

/**
 * print_alphabet_x10 - prints print_alphabet function ten times
 *
 * main - Entry point
 *
 * Return: Always 0 (success)
 */


void print_alphabet_x10(void)
{
	int limit;
	int ch;

	for (limit = 0; limit < 10; limit++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');	
	}
}
