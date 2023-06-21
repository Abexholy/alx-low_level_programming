#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a given
 *                  parameter on an  element of each an array.
 * @array: The array been represented.
 * @size: The size of array taken.
 * @action: A pointer in the function to be executed.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
