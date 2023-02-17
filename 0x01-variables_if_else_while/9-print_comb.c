#include<stdio.h>

/**
 * main - print single digit numbers
 *
 * Description: print all possible combinations of single digit numbers
 *
 * Return: 0 on success
 */
int main(void)
{
	int a = 48;

	while (a <= 57)
	{
		putchar(a);
		if (a != 57)
		{
			putchar(44);
			putchar(32);
		}
		a++;
	}
	putchar(10);
	return (0);
}
