#include<stdio.h>
#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 * Return: 0 for successful execution.
 * on error, -1 is returned, and errno is set appropiately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
