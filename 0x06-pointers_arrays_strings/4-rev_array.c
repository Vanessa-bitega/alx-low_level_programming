#include "main.h"
/**
 * reverse_array - Write a function that reverses the content of an array
 * @a: where n is
 * @n: element to reverse
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
