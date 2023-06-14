#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry for the code
 * @ac: int input into the programme
 * @av: double pointer array given
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int b, g, r = 0, p = 0;
	char *ril;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (b = 0; b < ac; b++)
	{
		for (g = 0; av[b][g]; g++)
			l++;
	}
	p += ac;

	ril = malloc(sizeof(char) * p + 1);
	if (ril == NULL)
		return (NULL);
	for (b = 0; b < ac; b++)
	{
	for (g = 0; av[b][g]; g++)
	{
		ril[r] = av[b][g];
		r++;
	}
	if (ril[r] == '\0')
	{
		ril[r++] = '\n';
	}
	}
	return (ril);
}

