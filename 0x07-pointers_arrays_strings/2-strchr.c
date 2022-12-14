#include "main.h"
#include <stddef.h>

/**
 * *_strchr - locates a character in a string
 * @s: parameter to check
 * @c: parameter to check
 *
 * Return: a pointer to first occurrence of
 * character c or NULL
 */
char *_strchr(char *s, char c)
{
	char *p = NULL;

	while (*s != c && *s != '\0')
	{
		p = ++s;
	}

	return (p);
}
