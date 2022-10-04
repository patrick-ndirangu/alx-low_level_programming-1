#include <stdlib.h>
#include "main.h"

/**
* _strdup - returns a pointer to a newly allocated space in memory
* @str: string given as a parameter.
* Return: NULL or pointer to string
*/
char *_strdup(char *str)
{
	char *c;
	unsigned int a = 0, b = 0;

	if (str == NULL)
		return (NULL);

	while (str[b])
		b++;

	c = malloc(sizeof(char) * (b + 1));

	if (c == NULL)
		return (NULL);

	while ((c[a] = str[a]) != '\0')
		a++;

	return (c);
}
