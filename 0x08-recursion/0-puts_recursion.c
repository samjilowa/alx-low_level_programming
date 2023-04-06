#include "main.h"

/**
 * _puts_recursion - Print a string followed by a new line 
 * @s: string
 * Author: Samuel jilowa
 * Country: zambia
 *Email: samueljilowa@gmail.com
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
