#include <stdio.h>
#include "main.h"
/**
 * main -  prints the number of arguments passed into it
 * @argc: argument to count
 * @argv: array of the counted argument
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	argv = argv;

	printf("%d\n", argc-1);
	return (0);
}
