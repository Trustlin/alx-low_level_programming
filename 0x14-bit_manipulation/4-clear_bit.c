#include "main.h"

/**
 * clear_bit - sets the value of a bits to 0
 * @n: pointer to the bit
 * @index: index
 * Return: 1 0r -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 2))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
