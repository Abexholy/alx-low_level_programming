#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words written
 * @s: string to evaluate in the code
 *
 * Return: number of words in string
 */
int count_word(char *s)
{
	int map, d, x;

	map = 0;
	x = 0;

	for (d = 0; s[d] != '\0'; d++)
	{
		if (s[d] == ' ')
			map = 0;
		else if (map == 0)
		{
			map = 1;
			x++;
		}
	}

	return (x);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **tripl, *tmp;
	int j, l = 0, len = 0, work, c = 0, start, end;

	while (*(str + len))
		len++;
	work = count_word(str);
	if (work == 0)
		return (NULL);

	triple = (char **) malloc(sizeof(char *) * (work + 1));
	if (tripl == NULL)
		return (NULL);

	for (j = 0; j <= len; j++)
	{
		if (str[j] == ' ' || str[j] == '\0')
		{
			if (c)
			{
				end = j;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				tripl[l] = tmp - c;
				l++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = j;
	}

	tripl[l] = NULL;

	return (tripl);
}

