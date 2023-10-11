#include "main.h"

/**
 * main - entry point
 * description: print _purchar using putchar prototype
 * Return: 0 for successful execution.
 */

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
	_putchar(str[ch]);
	_putchar('\n');

	return (0);
}
