#include "main.h"
/**
 * print_diagonal - draw a line
 * @n: num of times to print the line
 * Return: empty
 */
void print_diagonal(int n)
{
	int z, t;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (z = 0; z < n; z++)
		{
			for (t = 0; t < z; t++)
			{
				putchar(32);
			}
			putchar(02);
			putchar('\n');
		}
	}
}
