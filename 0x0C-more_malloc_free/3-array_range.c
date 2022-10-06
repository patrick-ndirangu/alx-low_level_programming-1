#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 * @min: minimum value in array
 * @max: maximum value in array
 *
 * Return: pointer to newly created array
 */
int *array_range(int min, int max)
{
	int *ar, a, b;

	a = 0, b = 0;

	if (min > max)
	{
		return (NULL);
	}

	while (b < (max - min))
	{
		b++;
	}

	ar = malloc(sizeof(int) * (b + 1));

	if (ar == NULL)
	{
		return (NULL);
	}

	while (a <= b)
	{
		ar[a] = min++;
		a++;
	}

	return (ar);
}
