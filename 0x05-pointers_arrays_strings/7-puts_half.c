#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int a  = 0, b;

	while(*str)
	{
		a++;
		str++;
	}
	for (b = 0; b < a; b++)
	{
		str--;
	}

	b = (a % 2 == 0) ? a / 2 : (a + 1) / 2;

	for (; b < a; b++)
	{
		_putchar(str[b]);
	}
	_putchar('\n');
}
