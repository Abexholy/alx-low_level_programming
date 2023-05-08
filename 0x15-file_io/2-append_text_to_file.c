#include "main.h"

/**
 * append_text_to_file - text at the end of all the file.
 * @filename: pointer to name of the file.
 * @text_content: strings to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If file does not exist user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i, a, sen = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (sen = 0; text_content[sen];)
			sen++;
	}

	i = open(filename, O_WRONLY | O_APPEND);
	a = write(i, text_content, sen);

	if (i == -1 || a == -1)
		return (-1);

	close(i);

	return (1);
}

