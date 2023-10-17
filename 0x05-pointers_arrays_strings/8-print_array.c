#include"main.h"

/**
 * print_array - print n elements of an array of integers.
 * @n: elements parameter input
 * @a: string parameter input
 * Return: 0 for successful execution.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	print("\n");
}
