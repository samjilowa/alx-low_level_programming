#include "main.h"

/**
 * get_bit - gets value of a bit at an index
 * @n: number to go through
 * @index: index from 0
 *
 * Return: value of bit at index or -1 if an error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	return (n >> index & 1);
}
