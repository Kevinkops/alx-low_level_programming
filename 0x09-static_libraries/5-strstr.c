#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: pointer to string to search in
 * @needle: pointer to string to search for
 *
 * Return: pointer to beginning of located substring, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return (haystack);

		haystack++;
	}

	return (NULL);
}
