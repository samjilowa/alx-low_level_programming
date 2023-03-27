#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */
void rev_string(char *s)
{
	char rev = s[0];
	int tigist = 0;
	int i;

	while (s[tigist] != '\0')
	tigist++;
	for (i = 0; i < tigist; i++)
	{
		tigist--;
		rev = s[i];
		s[i] = s[tigist];
		s[tigist] = rev;
	}
}
