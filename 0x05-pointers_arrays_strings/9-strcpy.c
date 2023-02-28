#include "main.h"
/**
 * _strcpy - copies the string pointed by src including 0
 * @dest: destination
 * @src: source
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int  o = 0;

	while (*(src + o) != '\0')
	{
		*(dest + o) = *(src + o);
		o++;
	}
	*(dest + o) = '\0';
	return (dest);
}
