#include "main.h"
/**
 * _puts - fubction that prints a string followed bya new line
 * @str: element to be checked
 * Return:  return thr *str
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');

}
