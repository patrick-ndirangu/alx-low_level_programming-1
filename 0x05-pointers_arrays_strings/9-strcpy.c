#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: parameter to check
 * @src: parameteer to check
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int add;

	add = 0;
	
	while (*(src + add) != '\0')
	{
		*(dest + add) = *(src + add);
		add++;
	}
	*(dest + add) = '\0';

	return (dest);
}
