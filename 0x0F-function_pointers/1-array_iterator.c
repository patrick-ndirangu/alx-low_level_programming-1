#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @array: pointer to array
 * @size: size of the array
 * @action: pointer to the function
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int n;

	if (array && size > 0 && action)
	{
		for (n = 0; n < size; n++)
		{
			(*action)(array[n]);
		}
	}
}
