 #include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get from
 * one number to another.
 * @n: first number
 * @m: second number
 *
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count;
	unsigned long int flip;

	flip = n ^ m;
	count = 0;
	while (flip > 0)
	{
		count = count + (flip & 1);
		flip >>= 1;
	}

	return (count);

}
