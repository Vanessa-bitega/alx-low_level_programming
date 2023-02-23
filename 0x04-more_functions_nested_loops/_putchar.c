#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The chacter to print
 *
 * Reurn: On success 1.
 * On error, -1 returned, and errno is set appropreiately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
