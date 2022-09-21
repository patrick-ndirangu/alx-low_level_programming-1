#include "main.h"
#include <string.h>

/**
 * *_strncat - concatenates two strings
 * @dest: parameter to check
 * @src: parameter to check
 * @n: number of bytes from src
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *p = dest + strlen(dest);
	
	while (*src != '\0' && n--)
	{
		*p++ = *src++;
	}
	
	return (dest);
}
