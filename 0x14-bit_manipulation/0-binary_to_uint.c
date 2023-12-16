#include "main.h"
#include <stddef.h>
/**
 *binary_to_uint - Convert binary number to unsigned int
 *
 *@b: Character parameter
 *
 *Return: Unsigned Integer
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;

	if (b == NULL)
	return (0);

	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			result <<= 1;
			result += b[i] - '0';
		}
		else
		{
			return (0);
		}
	i++;
	}
	return (result);
}

