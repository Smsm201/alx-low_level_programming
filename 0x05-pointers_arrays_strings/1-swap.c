#include "main.h"

/**
 * swap_int - swaps two values of two integers
 * using two input parameter
 *
 * @a: input parameter 1
 * @b: input parameter 2
 * Return: 0 for successful execution.
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
