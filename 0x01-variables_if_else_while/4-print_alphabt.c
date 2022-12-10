#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	char C;

	for (C = 'a'; C <= 'z'; C++)
	{
		if (C != 'e' && C != 'q')
			putchar(C);
	}
	putchar('\n');
	return (0);
}

