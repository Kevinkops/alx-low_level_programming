#include "main.h"

/**
 * _strcmp - Compare two strings.
 *
 * @s1: First string to compare.
 * @s2: Second string to compare.
 *
 * Return: The difference between the ASCII values of the first non-matching
 * characters, or 0 if the strings are equal.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}

	if (s1[i] == s2[i])
	{
		return (0);
	}
	else if (s1[i] < s2[i])
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}
