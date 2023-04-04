#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	char mk;

	for (mk = 'a'; mk <= 'z'; mk++)
	{
		if (mk != 'e' && mk != 'q')
			putchar(mk);
	}
	putchar('\n');

	return (0);
}
