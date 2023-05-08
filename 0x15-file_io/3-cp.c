#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates 1024 bytes for the buffer.
 * @file: The name of file buffer is storing chars for.
 *
 * Return: A pointer to newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *cuff;

	cuff = malloc(sizeof(char) * 1024);

	if (cuff == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (cuff);
}

/**
 * close_file - Closes file descriptor.
 * @fd: The file to be closed.
 */
void close_file(int fd)
{
	int t;

	t = close(fd);

	if (t == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of one file to the other.
 * @argc: The number of arguments supplied in program.
 * @argv: An array of pointers in the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument is incorrect - exit code 97.
 * If file_from does'nt exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from can't be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int frog, bo, a, x;
	char *cuff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	cuff = create_buffer(argv[2]);
	frog = open(argv[1], O_RDONLY);
	a = read(frog, cuff, 1024);
	bo = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (frog == -1 || a == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(cuff);
			exit(98);
		}

		x = write(bo, cuff, a);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		a = read(frog, cuff, 1024);
		bo = open(argv[2], O_WRONLY | O_APPEND);

	} while (a > 0);

	free(cuff);
	close_file(frog);
	close_file(bo);

	return (0);
}

