#include<stdio.h>

/**
 * main - print single digit numbers of base 10
 *
 * Description: print single digit numbers of base 10 with putchar
 *
 * Return: 0 on success
 */
int main(void)
{
	int a = 48;

	while (a <= 57)
	{
		putchar(a);
		a++;
	}
	putchar(10);
	return (0);
}
