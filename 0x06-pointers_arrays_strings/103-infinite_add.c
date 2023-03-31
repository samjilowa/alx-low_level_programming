#include "main.h"

/**
 * rev_string - reverse array
 * @n: integer params
 * Return: 0
 */

void rev_string(char *n)
{
	int s = 0;
	int j = 0;
	char sam;

	while (*(n + s) != '\0')
	{
		s++;
	}
	s--;

	for (j = 0; j < s; j++, s--)
	{
		sam = *(n + j);
		*(n + j) = *(n + s);
		*(n + s) = sam;
	}
}

/**
 * infinite_add - add 2 numbers together
 * @sj: text representation of 1st number to add
 * @n2: text representation of 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */
char *infinite_add(char *sj, char *n2, char *r, int size_r)
{
	int overflow = 0, s = 0, j = 0, digits = 0;
	int val1 = 0, val2 = 0, sam_tot = 0;

	while (*(sj + s) != '\0')
		s++;
	while (*(n2 + j) != '\0')
		j++;
	s--;
	j--;
	if (j >= size_r || s >= size_r)
		return (0);
	while (j >= 0 || s >= 0 || overflow == 1)
	{
		if (s < 0)
			val1 = 0;
		else
			val1 = *(sj + s) - '0';
		if (j < 0)
			val2 = 0;
		else
			val2 = *(n2 + j) - '0';
		sam_tot = val1 + val2 + overflow;
		if (sam_tot >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (sam_tot % 10) + '0';
		digits++;
		j--;
		s--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}

