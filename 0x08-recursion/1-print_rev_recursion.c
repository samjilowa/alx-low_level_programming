#include "main.h"

/**
 * _print_rev_recursion - print a string in reverse mode
 * Author: samuel jilowa
 * Country:  Zambia
 * Email: samueljilowa@gmail.com
 * School  ALX school of swe
 * @s: string to be printed
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(1 + s);
	_putchar(*s);
}
