#include<unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to ptint
 * return: on success 1.
 * on error, -1 is returned, and erroe is not appropiately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
