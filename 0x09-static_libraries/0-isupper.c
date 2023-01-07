#include "main.h"

/**
 * _isupper - checks code
 * @c: input
 * Return: if c uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))

		return (1);

	else
		return (0);
}
