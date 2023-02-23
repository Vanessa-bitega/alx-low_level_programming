#include "main.h"

/**
 * _isupper - checks whether the letter i uppecase
 * @x: the element to be checked
 * Return: 1 for uppercase otherwise 0
 */
int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	return (0);
}
