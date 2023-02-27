#include "main.h"
#include<stdio.h>
/**
 * print_array - prints an array of integers
 *
 * @a: array to be printed
 *
 * @n: number of elements in array
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
			printf(", ");
		i++;
	}
	putchar(10);
}
