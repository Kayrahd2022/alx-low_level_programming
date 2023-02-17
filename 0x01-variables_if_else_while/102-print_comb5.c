#include<stdio.h>

/**
 * main - print two two-digit number combo
 *
 * Description: print two two-digit number combo
 *
 * Return: 0 on success
 */
int main(void)
{
	int a = 0, b = 1, a_max = 98, b_max = 99;

	while (a <= a_max)
	{
		b = a + 1;
		while (b <= b_max)
		{
			putchar(a < 9 ? 0 + '0' : (a / 10) + '0');
			putchar(a < 9 ? a + '0' : (a % 10) + '0');
			putchar(32);
			putchar(b < 9 ? 0 + '0' : (b / 10) + '0');
			putchar(b < 9 ? 0 + '0' : (b % 10) + '0');
			if (a != a_max)
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
