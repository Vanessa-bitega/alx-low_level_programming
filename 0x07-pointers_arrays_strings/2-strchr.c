#include "main.h"
#include <stdlib.h>
/**
 * _strchr - locates a character in string
 * @s: the string to check
 * @c: the character we're looking for
 * Return: a pointer to the fierst coourance of @c in a string and NULL
 * otherwise
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
