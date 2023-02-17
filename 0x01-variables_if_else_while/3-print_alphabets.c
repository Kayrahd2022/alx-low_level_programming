#include<stdio.h>

/**
 * main - print letters of the alphabet
 *
 * Description: print letters of the alphabet in lowercase then uppercase
 *
 * Return: 0 on success
 */
int main(void)
{
	int a = 65, b = 97;

	while (b <= 122)
	{
		putchar(b);
		b++;
	}

	while (a <= 90)
	{
		putchar(a);
		a++;
	}
	putchar(10);
	return (0);
}
