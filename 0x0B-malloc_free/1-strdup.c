#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *abe;
	int j, s = 0;

	if (str == NULL)
		return (NULL);
	j = 0;
	while (str[j] != '\0')
		j++;

	abe = malloc(sizeof(char) * (j + 1));

	if (abe == NULL)
		return (NULL);

	for (s = 0; str[s]; s++)
		abe[s] = str[s];

	return (abe);
}

