#include "main.h"

/**
 * _strchr - Locates the first occurrence of a character in a string.
 * @s: A pointer to the string to search.
 * @c: The character to search for.
 *
 * Return: If c is found - a pointer to the first occurrence.
 *         If c is not found - NULL.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}

	if (c == '\0')
		return (&s[i]);

	return (NULL);
}
