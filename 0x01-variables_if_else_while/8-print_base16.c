#include<stdio.h>

/**
 * main - print all numbers of base 16
 *
 * Description: print all numbers of base 16
 *
 * Return: 0 on completion
 */
int main(void)
{
	int a = 48, b = 97;

	while (a <= 57)
	{
		putchar(a);
		a++;
	}
	while (b <= 102)
	{
		putchar(b);
		b++;
	}
	putchar(10);
	return (0);
}
