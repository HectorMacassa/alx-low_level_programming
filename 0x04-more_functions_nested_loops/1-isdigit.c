#include "main.h"
/**
 * _isdigit - checks for digits 0 - 9
 * @c: the character being checked
 * Return: 1 if c is a digit, else returns 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
