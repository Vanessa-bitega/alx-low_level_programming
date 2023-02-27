#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: element to be used
 * Return: return *s
 */
void print_rev(char *s)
{
	int a = 0;

	while (*s)
	{
		s++;
		a++;
	}
	while (a)
	{
		s--;
		_putchar(*s);
		a--;
	}
	_putchar('\n');
}
