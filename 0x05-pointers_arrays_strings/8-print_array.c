#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n element of an array of int
 * @a: to be used
 * @n: to be used
 * Return: nothing succeessful
 */
void print_array(int *a, int n)
{
	int t = 0;

	while (t < n)
	{
		printf("%d", a[t]);

		if (t != (n - 1))
		printf(", ");
		t++;
	}
	putchar('\n');
}
