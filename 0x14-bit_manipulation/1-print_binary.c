#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number.
 * @n: number to be printed to binary
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int binary_value = 1;

	binary_value <<= ((sizeof(binary_value) * 8) - 1);

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n == 1)
	{
		_putchar('1');
		return;
	}
	while (binary_value > 0)
	{
		if ((binary_value & n) == 0)
			binary_value >>= 1;
		else
			break;
	}
	while (binary_value > 0)
	{
		if ((binary_value & n) == 0)
			_putchar('0');
		else
			_putchar('1');
		binary_value >>= 1;
	}

}
