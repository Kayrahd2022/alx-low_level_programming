#include "main.h"

/**
 * rev_string - reverse string
 *
 * @s: string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int a = 0, b = 0;
	char last_char;

	while (*s)
	{
		s++;
		a++;
	}
	for (b = 0; b < a; b++)
	{
		s--;
	}
	for (b = 0; b < (a / 2); b++)
	{
		int final = a - 1;

		last_char = s[final - b];
		s[final - b] = s[b];
		s[b] = last_char;
	}
}
