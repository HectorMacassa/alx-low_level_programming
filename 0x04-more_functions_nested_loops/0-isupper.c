#include "main.h"
/**
 * _isupper - checks for lower case characters
 * @c: the character being checked
 * Return: 1 for uppercase letter, 0 for anything else
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
