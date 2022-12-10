#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * return : 0
 */

int main(void)
{
	char letter, alpha;

	for (letter = 'a'; letter <= 'z'; letter++)

		for (alpha = 'A'; alpha <= 'Z'; alpha++)
			putchar(letter);
	putchar(alpha);
	putchar('\n');
	return (0);
}
