#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file to STDOUT.
 * @filename: text file
 * @letters: number of letters to be read
 * Return: w- number of bytes read and printed
 *        0 when function fails or filename NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *cak;
	ssize_t rp;
	ssize_t u;
	ssize_t c;

	rp = open(filename, O_RDONLY);
	if (rp == -1)
		return (0);
	cak = malloc(sizeof(char) * letters);
	c = read(rp, cak, letters);
	u = write(STDOUT_FILENO, cak, c);

	free(cak);
	close(rp);
	return (u);
}
