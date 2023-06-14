#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **nii;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	nii = malloc(sizeof(int *) * height);

	if (nii == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		nii[i] = malloc(sizeof(int) * width);

		if (nii[i] == NULL)
		{
			for (; i >= 0; i--)
				free(nii[i]);

			free(nii);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			nii[i][j] = 0;
	}

	return (nii);
}

