#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: input string
 * @accept: characters to match
 *
 * Return: number of characters in s that match any character in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int num_matching_chars = 0;
	int accept_index;

	while (*s)
	{
		for (accept_index = 0; accept[accept_index]; accept_index++)
		{
			if (*s == accept[accept_index])
			{
				num_matching_chars++;
				break;
			}
			else if (accept[accept_index + 1] == '\0')
				return (num_matching_chars);
		}
		s++;
	}
	return (num_matching_chars);
}
