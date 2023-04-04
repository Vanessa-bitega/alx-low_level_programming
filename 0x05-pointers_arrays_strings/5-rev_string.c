#include "main.h"
/**
 * rev_string -  reverse as string
 * @s: character to be checked
 * Return: nothing on success
 */
void rev_string(char *s)
{
	int count = 0;
	char last_char = s[0];
	int i;

	while (s[count] != '\0')
		count++;
	for (i = 0; i < count; i++)
	{
		count--;
		last_char = s[i];
		s[i] = s[count];
		s[count] = last_char;
	}
}
