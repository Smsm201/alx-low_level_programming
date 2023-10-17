#include"main.h"

/**
 * '_strcpy - copies the string pointed to by str
 * @dest: chat type string
 * @src: char type string
 * description: copy the string pointed to by pointer 'src' to
 * the buffer to by 'dest'
 * Return: 0 for successful execution.
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
