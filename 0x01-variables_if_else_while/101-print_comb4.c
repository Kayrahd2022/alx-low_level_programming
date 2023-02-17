#include<stdio.h>

/**
 * main - print three digit combo
 *
 * Description: print three digit combo
 *
 * Return: 0 on success
 */
int main(void)
{
	int a = 48, b = 48, c = 48;

	while (a <= 57)
	{
		b = a + 1;
		while (b <= 57)
		{
			c = b + 1;
			while (c <= 57)
			{
				putchar(a);
				putchar(b);
				putchar(c);
				if (a < 55 || b < 56 || c < 57)
				{
					putchar(44);
					putchar(32);
				}
				c++;
			}
			b++;
		}
		a++;
	}
	putchar(10);
	return (0);
}

