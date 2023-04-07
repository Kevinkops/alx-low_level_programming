#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: Destination string.
 * @src: Source string.
 *
 * Return: Pointer to the resulting string.
 */
char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*s)
		s++;

	while ((*s++ = *src++))
		;

	return (dest);
}
