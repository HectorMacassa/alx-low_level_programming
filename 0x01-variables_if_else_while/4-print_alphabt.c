#include <stdio.h>
/**
 * main - prints letters except e and q
 * return: 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z';letter++)
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
	}
	putchar('\n');
	return (0);
}
