#include<stdio.h>

/**
 * main - print double digit combinations
 *
 * Description: print double digit combinations
 *
 * Return: 0 on success
 */
int main(void)
{
	int a = 48, b = 48;

	while (a <= 57)
	{
		b = a + 1;
		while (b <= 57)
		{
			putchar(a);
			putchar(b);
			if (a < 56 || b < 57)
			{
				putchar(44);
				putchar(32);
			}
			b++;
		}
		a++;
	}
	putchar(10);
	return (0);
}

