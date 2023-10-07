#include <stdio.h>

/**
 * main - this functin prints letters of the alphabet
 * Return: 0
 */
int main (void)
{
	char letter = 'a';
	while (letter <= 'z')
	{
		putchar(letter);
		letter ++;
	}
	putchar('\n');
	return (0);
}
