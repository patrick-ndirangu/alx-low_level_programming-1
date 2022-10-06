#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: elements of array
 * @size: size of elements in array
 *
 * Return: a pointer to allocated memory or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ar;
	unsigned int n;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ar = malloc(nmemb * size);

	if (ar == 0)
	{
		return (NULL);
	}

	n = 0;

	while (n < (nmemb * size))
	{
		ar[n] = 0;
		n++;
	}

	return ((void *)ar);
}

