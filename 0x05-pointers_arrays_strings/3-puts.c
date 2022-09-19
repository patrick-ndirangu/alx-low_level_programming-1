#include "main.h"
#include <ctype.h>

/**
 * _puts - prints a string followed by a new line
 * to stdout
 * @str: parameter to check
 *
 * Return:
 */
void _puts(char *str)
{
	int i = 0;

	while (isprint(str[i]))
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
