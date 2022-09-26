#include "main.h"
#include <stddef.h>

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: parameter to check
 * @accept: parameter to check
 *
 * Return: a pointer to byte in s that matches one of the
 * bytes in accept, or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int a = 0;
	int b = 0;

	int bef = 0;
	int aft = 0;

	while (s[a])
	{
		a++;
	}

	bef = a;
	a = 0;

	while (accept[a])
	{
		b = 0;

		while (s[b])
		{
			if (accept[a] == s[b])
			{
				if (b <= bef)
				{
					bef = b;
					aft = 1;
				}
			}
			b++;
		}
		a++;
	}

	if (aft == 1)
	{
		return (&s[bef]);
	}

	return (NULL);
}
