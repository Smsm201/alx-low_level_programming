#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string parameter input
 * Return: 0 for successful execution.
 */

int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
		++counter;
	return (counter);
}
