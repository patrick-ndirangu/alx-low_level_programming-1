#include "main.h"

/**
 * *leet - encodes a string into 1337
 * @str: parameter to check
 *
 * Return: str
 */
char *leet(char *str)
{
	int i, j;
	char minus[] = {'a', 'e', 'o', 't', 'l', '\0'};
	char mayus[] = {'A', 'E', 'O', 'T', 'L', '\0'};
	char numbers[] = {'4', '3', '0', '7', '1', '\0'};

	for (i = 0; str[i] != '\0'; ++i)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == minus[j] || str[i] == mayus[j])
			{
				str[i] = numbers[j];
			}
		}
	}
	return (str);
}
