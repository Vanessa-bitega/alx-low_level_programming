#include "main.h"
/**
 * print_most_numbers - preint nums from 0to 9 except 2 and 4
 * Return: num from 0 to 9
 */
void print_most_numbers(void)
{
	int g = 0;

	for (; g <= 9; g++)
	{
		if (g == 2 || g == 4)
		{
			continue;
		}
		else
		{
			putchar(g + '0');
		}
	}
	putchar('\n');
}
