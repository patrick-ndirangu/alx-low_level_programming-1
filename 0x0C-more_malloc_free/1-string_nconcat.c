#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: 1st string
 * @s2: 2nd string
 * @n: number of bytes of s2
 *
 * Return: pointer to newly allocated memory or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, digit1, digit2;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	digit1 = 0, digit2 = 0;
	while (*(s1 + digit1))
		digit1++;
	while (*(s2 + digit2))
		digit2++;
	if (n < digit2)
		digit2 = n;

	s = malloc(sizeof(char) * (digit1 + digit2 + 1));

	if (s == 0)
		return (0);

	for (a = 0; a < digit1; a++)
		*(s + a) = *(s1 + a);

	for (a = 0, b = digit1; a < digit2; a++, b++)
		*(s + b) = *(s2 + a);

	*(s + b) = '\0';
	return (s);
}
