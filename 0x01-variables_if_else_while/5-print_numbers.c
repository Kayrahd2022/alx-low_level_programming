#include<stdio.h>

/**
 * main - print single digit numbers
 *
 * Description: print numbers less than 10 starting with 0
 *
 * Return: 0 on success
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	putchar(10);
	return (0);
}
