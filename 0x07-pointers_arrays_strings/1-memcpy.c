#include "main.h"
/**
 * _memcpy - function that copies bytes from memory area
 * @src: to be copied from
 * @dest: to be copied to
 * @n: bytes to be copied
 * Return: a pointer @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

