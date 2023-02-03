#include "main.h"

/**
 * get_bit - get the value of a bit at a given index
 * @n: the bit
 * @index: index
 * Return: value of a bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 0))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
