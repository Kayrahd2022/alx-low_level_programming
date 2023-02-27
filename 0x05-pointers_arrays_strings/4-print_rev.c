#include "main.h"

/**
 * print_rev - prints string backwards
 *
 * @s: string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int a = 0;

	while (*s)
	{
		s++;
		a++;
	}
	while (a)
	{
		s--;
		_putchar(*s);
		a--;
	}
	_putchar('\n');
}
