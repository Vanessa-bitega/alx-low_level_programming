#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int v = 0;
	int v_a;
	int v_e;

	int v2;
	int v_a2;
	int v_e2;

	while (v <= 98)
	{
		v_a = (v / 10 + '0');
		v_e = (v % 10 + '0');
		v2 = 0;
		while (v2 <= 98)
		{
			v_a2 = (v2 / 10 + '0');
			v_e2 = (v2 % 10 + '0');

			if (v < v2)
			{
				putchar(v_a);
				putchar(v_e);
				putchar(' ');
				putchar(v_a2);
				putchar(v_e2);

				if (v != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			v2++;
		}
		v++;
	}
	putchar('\n');
	return (0);
}


