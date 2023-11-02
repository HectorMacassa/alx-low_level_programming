#include "main.h"
/**
 * _strpbrk - Searches a string for any set of bytes
 * @s: The string to be searched
 * @accept: The set of bytes to match in s
 *
 * Return: A pointer to the byte in s that matches any byte in accept,
 *         or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int b;

	while (*s)
	{
		for (b = 0; accept[b]; b++)
		{
			if (*s == accept[b])
			return (s);
		}
		s++;
	}
	return ('\0');
}
