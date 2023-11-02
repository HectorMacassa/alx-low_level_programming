#include "main.h"
/**
 * _atoi - Converts a string to an integer
 * @s: The string to be converted
 *
 * Return: The integer equivalent of the string
 */
int _atoi(char *s)
{
	int sig = 1, i = 0;
	unsigned int unsig = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
			sig *= -1;
		i++;
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		unsig = (unsig * 0) + (s[i] - '0');
		i++;
	}
	unsig *= sig;
	return (unsig);
}
