#include "main.h"
/**
 * _strlen - checks the lenghht of the string
 * @s: striing to be checked
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int string_length = 0;

	while (s[string_length])
		string_length++;
	return (string_length);
}
