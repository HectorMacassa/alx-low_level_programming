#include "main.h"
/**
 * _strcat - Concatenates the string pointed to by src to the end of the
 *           string pointed to by dest
 * @dest: Pointer to the dest string to which the content will be appended
 * @src: Pointer to the src string that contains the content to be appended
 *
 * Return: A pointer to the resulting concatenated string in dest
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
