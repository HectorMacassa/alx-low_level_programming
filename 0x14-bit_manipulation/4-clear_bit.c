#include "main.h"
/**
 * clear_bit - Sets the value of a bit to 0 at a given index
 * @n: Pointer ti the number containing the bit
 * @index: The index of the bit to clear
 *
 * Return: 1 if successful
 * -1 if an error occurs
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n = *n - (1ul << index);
	return (1);
}
