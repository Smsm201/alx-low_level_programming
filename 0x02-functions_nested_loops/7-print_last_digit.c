#include"main.h"

/**
 * print_last_digit - print last digit of a number
 * @n: takes number input
 * return: lastdigit
 * Return: 0 for successful execution.
 */

int print_last_digit(int n)
{
	int lastdigit;

	if (n < 0)
		lastdigit = -1 * (n % 10);
	else
		lastdigit = n % 10;
	_putchar(lastdigit + '0');
	return (lastdigit);
}
