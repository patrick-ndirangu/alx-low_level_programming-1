#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * *_strcat - concatenates two strings
 * @dest: parameter to check
 * @src: parameter to check
 *
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int a, b;
	
	for (a = 0; dest[a] != '\0'; a++);
	
	for (b = 0; src[b] != '\0'; b++)
	{
		dest[a] = src[b];
		a++;
	}
	
	dest[a] = '\0';
	
	return (dest);
}
