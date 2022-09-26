#include "main.h"
#include <stddef.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: parameter to check
 * @accept: parameter to check
 *
 * Return: number of bytes in initial segment of s
 * which consists only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, b;
	int c = 0;

	for (a = 0; *(s + a) != '\0'; a++)
	{
		if (*(s + a) != 32)
		{
			for (b = 0; *(accept + b); b++)
			{
				if (*(s + a) == *(accept + b))
				{
					c++;
				}
			}
		}

		else
		{
			return (c);
		}
	}

	return c;
}
