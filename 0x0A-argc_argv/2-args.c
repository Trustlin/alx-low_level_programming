#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all argument it recieves
 * @argc: argument count
 * @argv: argument vectors
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
