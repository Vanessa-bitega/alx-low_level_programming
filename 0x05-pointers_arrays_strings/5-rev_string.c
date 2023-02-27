#include "main.h"
/**
 * rev_string -  reverse as string
 * @s: character to be checked
 * Return: return *s
 */
void rev_string(char *s)
{
	int count = 0, i = 0;
	char last_char;

	while (*s)
	{
		s++;
		count++;
	}
	for (i = 0; i < count; i++)
		s--;
	for (i = 0; i < (count / 2); i++)
	{
		int last = count - 1;

		last_char = s[last - 1];
		s[last - i] = s[i];
		s[i] = last_char;
	}
}
