#include "function_pointers.h"
/**
 * array_iterator - execute array of function
 * @array: array of pointers
 * @size: size of array
 * @action: function pointer
 * Return: Always 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
