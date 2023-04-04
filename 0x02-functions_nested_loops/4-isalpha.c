#include "main.h"
/**
 * _isalpha - checks alphabetic characters
 *@c: the character we are looking for
 * Return: 1 if c is a letter and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 98) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}

