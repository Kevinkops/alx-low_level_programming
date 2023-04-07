#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The integer value of the converted string.
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int res = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;

		if (*s >= '0' && *s <= '9')
		{
			res = (res * 10) + (*s - '0');

			if (*(s + 1) < '0' || *(s + 1) > '9')
				break;
		}

		s++;
	}

	return (res * sign);
}
