#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string in reverse
 * @s: parameter to check
 *
 * Return: void
 */
void print_rev(char *s)
{
	int length;

	length = strlen(s);

	while (length--)
	{
		_putchar(*(s + length));
	}

	_putchar(10);
}
