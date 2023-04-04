#include "main.h"
/**
 * _isdigit - checkes if the 00 is a digit
 * @c: number to be checked
 * Return: 1 if c is a digit otherwise 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

