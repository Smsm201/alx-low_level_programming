#include "main.h"
/**
 * rev_string - reversed a string
 * @s: string parameter input
 * Return: 0 for successful execution.
 */

void rev_string(char *s)
{
	int l, i;
	char temp;

	for (l = 0; s[l] != '\0'; ++1)
		;

	for (i = 0; i < l / 2; i++)
	{
		temp = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = temp;
	}
}
