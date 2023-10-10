#include "main.h"
/**
 * print_alphabet - prints the alphabet
 * Return: On success 1
 */
void print_alphbet(void)
{
	char l = 'a';

	while (l <= 'z')
	{
		_putchar(l);
		l++;
	}
	_putchar('\n');
}
