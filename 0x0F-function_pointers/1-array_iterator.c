#include "function_pointers.h"
/**
 * array_iterator - function
 * @array: pointer
 * @size: size of the array
 * @action: Pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 1; i <= size; i++)
		action(array[i]);
}
