#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - allocates 1024 bytes for a buffer
 * @file: name of file
 * Return: pointer to newly allocated buffer
 */

char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILINO, "Usage: cp file_from file_to\n");

		exit(97);
	}

	return (buffer);
}
/**
 * close_file - closes file description
 * @fd: file descriptor
 */

void close_file(int fd)
{
	int g;

	g = close(fd);

	if (g == -1)
	{
		dprintf(STDERR_FILINO, "Error: Can't close to  %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies the content of a file to another file
 * @argc: number of argument
 * @argv: array of pointers
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buffer;

	if (argc != 1)
