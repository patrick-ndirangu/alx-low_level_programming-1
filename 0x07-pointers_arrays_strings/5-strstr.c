#include "main.h"
#include <string.h>
#include <stddef.h>

/**
 * *_strstr - locates a substring
 * @needle: parameter to be scanned
 * @haystack: parameter to be checked
 *
 * Return: a pointer to the beginning of the
 * located substring, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *p;

	p = haystack;

	while (*p)
	{
		if ((strncmp(p, needle, strlen(needle)) == 0))
		{
			return (p);
		}
		p++;
	}

	return (NULL);
}
