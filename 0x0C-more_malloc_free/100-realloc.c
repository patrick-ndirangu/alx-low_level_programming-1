#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to memory
 * @old_size: old size in bytes
 * @new_size: new size in bytes
 *
 * Return: ptr or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int n;
	char *src, *dest;

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
		{
			return (NULL);
		}
		return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	dest = malloc(new_size);
	if (dest == NULL)
	{
		return (NULL);
	}

	src = ptr;
	n = 0;

	while (n < new_size && n < old_size)
	{
		dest[n] = src[n];
		n++;
	}
	free(ptr);
	return (dest);
}


