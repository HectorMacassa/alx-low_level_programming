#include "main.h"
/**
 * _strlen - Calculates the length of a string
 * @s: The string to measure the length of
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int longa = 0;

	while (*s != '\0')
	{
		longa++;
		s++;
	}
	return (longa);
}
