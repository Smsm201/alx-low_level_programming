#include"main.h"

/**
 * Description: print_alphabet - utilize on the _putchar function to print
 * the alphabet a - z
 *  Return: 0 for successful execution.
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
