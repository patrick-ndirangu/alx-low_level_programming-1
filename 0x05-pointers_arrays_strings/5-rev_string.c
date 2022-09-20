#include "main.h"

/**
 * rev_string - reverses a string
 * @s: parameter to check
 *
 * Return: void
 */
void rev_string(char *s)
{
	int rev = 0, a, b;
	char *str, c;

	while (rev >= 0)
	{
		if (s[rev] == '\0')
			break;
		rev++;
	}
	str = s;

	for (a = 0; a < (rev - 1); a++)
	{
		for (b = a + 1; b > 0; b--)
		{
			c = *(str + b);
			*(str + b) = *(str + (b - 1));
			*(str + (b - 1)) = c;
		}
	}
}
