#include"main.h"
/**
 * _islower - function to check if
 * character is lowercase
 * @c: checks input of function
 * return: return 1 if 'c' is lowercase
 * otherwise always 0 (success)
 * Return: 0 for successful execution.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
