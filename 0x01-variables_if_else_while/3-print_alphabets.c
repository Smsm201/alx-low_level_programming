#include <stdio.h>
/**
 * main - entry point
 * Description: print alphabet in lowercase then in uppercase
 * Return: 0 for successful execution.
 */
int main(void)
{
	char ch = 'a';
	char ch = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	while (ch <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');

	return (0);
}
