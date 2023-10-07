#include <stdio.h>
/**
 * main - reverse prints the alphabet
 * Return: 0
 */
int main(void)
{
	char l;

	for (l = 'z'; l >= 'a'; l--)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
