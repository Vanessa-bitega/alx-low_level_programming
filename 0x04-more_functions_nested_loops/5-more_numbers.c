#include "main.h"
/**
 * more_numbers - print 10 times the numbers from 0 up to 14
 * Return:o 10 times
 */
void more_numbers(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b > 9)
			{
				putchar((b / 10) + '0');
			}
			putchar((b % 10) + '0');
		}
		putchar('\n');
	}
}
