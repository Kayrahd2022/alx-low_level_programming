#include<stdio.h>

/**
 * main - print letters
 *
 * Description: print all letters of the alphabet in lowercase
 *
 * Return: 0 on success
 */
int main(void)
{
	int a = 97;

	while (a <= 122)
	{
		putchar(a);
		a++;
	}
	putchar(10);
	return (0);
}
