#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *c_buffer(char *file);
void c_file(int fd);

/**
 * c_buffer - allocates 1024 bytes for a buffer
 * @file: the name of the file the buffer is storing chars for.
 * Return: a pointer to the newly-allocated buffer.
 */
char *c_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * c_file - Closes file descriptiors.
 * @fd: the file descriptor to be closed
 */
void c_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}


/**
 * main - copies the contents of a file to another file.
 * @argc: the number of arguments supplied to the program
 * @argv: an array of pointer to the arguments.
 * Return: 0 on success.
 * Description: exit code 97 if the argument count is incorrect
 *              exit code 98 if file_from does not exist or cannot be read
 *              exit code 99 if file_to cannot be created or written to
 *              exit code 100 if file_to or file_from cannot be closed
 */
int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = c_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(to, buffer, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffer);
	c_file(from);
	c_file(to);

	return (0);
}
