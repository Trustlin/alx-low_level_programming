#include "main.h"

/**
 * set_bit - sets the value of a bit to 1
 * @n: pointer to bit
 * @index: index
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 2))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
