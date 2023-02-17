#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	char cp;

	for (cp = 'a'; cp <= 'z'; cp++)
		putchar(cp);

	for (cp = 'A'; cp <= 'Z'; cp++)
		putchar(cp);

	putchar('\n');

	return (0);
}


