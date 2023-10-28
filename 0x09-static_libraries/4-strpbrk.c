#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to be searched
 * @accept: string containing the bytes to match
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 * or 0 if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *p;

	while (*s)
	{
		for (p = accept; *p; p++)
		{
			if (*s == *p)
				return (s);
		}
		s++;
	}
	return (0);
}
