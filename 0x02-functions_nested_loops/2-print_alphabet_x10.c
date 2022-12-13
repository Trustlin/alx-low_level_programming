#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int a;
	char n;

	for (a = 0; a <= 9; a++)
	{
		for (n = 'a'; n <= 'z'; n++)
			_putchar(n);
		_putchar('\n');
	}
}
