#include "main.h"
#include "2-get_bit.c"

/**
 * set_bit - sets the value of bit to 1
 * @n: number to go through
 * @index: index from 0
 *
 * Return: 1 if the operation was successful, or -1 if an error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n |= 1 << index;

	if (get_bit(*n, index) == 1)
	{
		return (1);
	}

	return (-1);
}
