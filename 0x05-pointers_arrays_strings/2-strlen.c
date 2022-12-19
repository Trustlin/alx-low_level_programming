#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: index string
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
		return (a);
}
