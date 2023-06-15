#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings given
 * @s1: first string to join to the code
 * @s2: string to join to the code
 * @n: no of the chossen  variable
 * Return: return NULL or pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, lee1 = 0, lee2 = 0;
	char *u;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	lee1 = strlen(s1);
	lee2 = strlen(s2);
	if (n > lee2)
		n = lee2;
	u = malloc(lee1 + n + 1);
	if (u == NULL)
		return (NULL);
	for (a = 0; a < lee1 + n; a++)
	{
		if (*s1)
		{
			u[a] = *s1;
			s1++;
		}
		else
		{
			u[a] = *s2;
			s2++;
		}
	}
	u[a] = '\0';
	return (u);
}
