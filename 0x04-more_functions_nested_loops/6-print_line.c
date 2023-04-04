#include "main.h"
/**
 * print_line - draw a straight line
 * @n: the number of line
 * Return: empty
 */
void print_line(int n)
{
	int k;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (k = 0; k < n; k++)
		{
			putchar(95);
		}
		putchar('\n');
	}
}
