#include<stdio.h>
/**
 * main - entry point
 * Description: print alphabet in lowercase then in uppercase
 * Return: 0 for successful execution.
 */
int main(void)
{
	char ch = 'a';
	char CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');

	return (0);
}