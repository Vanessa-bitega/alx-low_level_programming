#include "main.h"

/**
 * _islower - checks for lowercases letters
 *@c: letter to be checked
 * Return: 1 for lowercases nad 0 for anything else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
