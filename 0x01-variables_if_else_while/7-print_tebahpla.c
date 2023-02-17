#include<stdio.h>

/**
 * main - print letters of alphabet in reverse
 *
 * Description: print letters of alphabet in reverse and lowercase
 *
 * Return: 0 on success
 */
int main(void)
{
	int a = 122;

	while (a >= 97)
	{
		putchar(a);
		a--;
	}
	putchar(10);
	return (0);
}
