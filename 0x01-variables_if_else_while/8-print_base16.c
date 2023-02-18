#include <stdio.h>
/**
 * main - Entry point
 *Return: 0
 */
int main(void)
{
	int b;
	char ba;

	for (b = '0'; b < 10; b++)
		putchar((b % 10) + '0');
	for (ba = 'a'; ba <= 'f'; ba++)
		putchar(ba);
	putchar('\n');
	return (0);
}
