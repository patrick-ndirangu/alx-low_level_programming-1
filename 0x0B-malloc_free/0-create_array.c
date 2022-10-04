#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars
 * @size: size of the array
 * @c: string
 *
 * Return: pointer to array or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int n;

	arr = malloc(sizeof(char) * size);

	for (n = 0; n < size; n++)
	{
		arr[n] = c;
	}

	if (size == 0 || arr == NULL)
	{
		return (NULL);
	}

	return (arr);
}
