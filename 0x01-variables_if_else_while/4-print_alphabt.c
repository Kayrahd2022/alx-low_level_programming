#include<stdio.h>

/**
 * main - print all letters except e and p
 *
 * Description: print all letters in lowercase except p and e
 *
 * Return: 0 on success
 */
int main(void)
{
	int a = 97;

	while (a <= 122)
	{
		if (a != 101 && a != 113)
		{
			putchar(a);
		}
		a++;
	}
	putchar(10);
	return (0);
}
