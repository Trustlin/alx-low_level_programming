#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * return : 0
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)

		for (letter = 'A'; letter <= 'Z'; letter++)
			putchar(letter);
	putchar('\n');
	return (0);
}