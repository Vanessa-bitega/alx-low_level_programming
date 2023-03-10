#include <stdio.h>
#include "main.h"
/**
 * main - prints all the argument it is given
 * @argc: count argument
 * @argv: array of argument
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
