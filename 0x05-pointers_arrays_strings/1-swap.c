#include "main.h"
/**
 * swap_int -swap two int variables
 * @a: swaps and stores thr address of b
 * @b: swaps and store the address of a
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int change;

	change = *b;
	*b = *a;
	*a = change;
}
