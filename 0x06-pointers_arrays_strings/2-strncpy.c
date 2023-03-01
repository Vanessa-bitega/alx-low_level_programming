#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: copy to
 * @src: copy from
 * @n: value to be copied
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int c;
	int d;

	c = 0;
	while (dest[c] != '\0')
	{
		c++;
	}
	d = 0;
	while (d < n && src[d] != '\0')
	{
		dest[c] = src[d];
		c++;
		d++;
	}
	dest[c] = '\0';
	return (dest);
}

