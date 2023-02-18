#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int numb;

	for (numb = 0; numb < 10; numb++)
		putchar((numb % 10) + '0');
	putchar('\n');
	return (0);
}
