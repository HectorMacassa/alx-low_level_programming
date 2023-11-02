#include "main.h"
/**
 * _strncat - Concatenates at most n characters
 * from the string pointed to by src
 * to the end of the string pointed to by dest
 * @dest: Pointer to the dest string to which the content will be appended
 * @src: Pointer to the src string that contains the content to be appended
 * @n: Maximum number of characters from src to be concatenated
 *
 * Return: A pointer to the resulting concatenated string in dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
