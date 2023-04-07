#include "main.h"

/**
 * _strncpy - Copies a string up to n bytes.
 * @dest: A pointer to the buffer storing the copy.
 * @src: The source string to copy from.
 * @n: The maximum number of bytes to copy.
 *
 * Return: A pointer to the destination string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
