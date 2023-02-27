#include "main.h"
/**
 * puts2 - preints every other character
 * @str:  var to be checked
 * Return: nothing successfull
 */
void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
				_putchar(str[i]);

				else

				continue;
				}
				_putchar('\n');
				}

