#include "main.h"
/**
 * print_numbers - print numbers from 0 to 9
 * Return: 0
 */
void print_numbers(void)
{
	int v;

	for (v = 0; v <= 9; v++)
	{
		_putchar(v + '0');
	}
	_putchar('\n');
}
