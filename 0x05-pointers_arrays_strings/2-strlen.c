#include "main.h"
/**
 * _strlen -  returns the length ofa string
 * @s: element to check on
 * Return: 0
 */
int _strlen(char *s)
{
	int L = 0;

	while (*s != '\0')
	{
		L++;
		s++;
	}
	return (L);
}

