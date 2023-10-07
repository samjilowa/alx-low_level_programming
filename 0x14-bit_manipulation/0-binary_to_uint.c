#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: is a pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if there is one or more chars in
 * the string b that is not 0 or 1, or if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal;
	unsigned int decimal_value;
	int i;

	if (b == NULL)
	{
		return (0);
	}

	decimal = 0;

	for (i = 0; b[i] != '\0'; i++)
	{
		;
	}

	for (i--, decimal_value = 1; i >= 0; i--, decimal_value *= 2)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

		if (b[i] & 1)
		{
			decimal = decimal + decimal_value;
		}
	}

	return (decimal);
}
