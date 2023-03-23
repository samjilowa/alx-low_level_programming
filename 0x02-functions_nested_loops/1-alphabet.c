#include "main.h"

/**
 * void - Entry point
 * Description: 'print the alphabet in lower case and ends with a new line'
 * print_alphabet, - print the alphabet in lower case and ends with a new line
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
