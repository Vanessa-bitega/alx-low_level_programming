 #include "main.h"

/**
 * swap_int - function that sawp two int
 * @a: int to be swapped
 * @b: int to be swapped
 * Return: nothing on success
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
