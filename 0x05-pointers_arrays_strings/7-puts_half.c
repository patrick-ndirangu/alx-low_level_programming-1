#include "main.h"

/**
 * puts_half - prints half a string
 * @str: parameter to check
 *
 * Return: void
 */
void puts_half(char *str)
{
	int n, length = _strlen(str);

	for (n = ((length - 1) / 2) + 1; n < length; n++)
		_putchar(*(str + n));
	_putchar(10);
}

/**
 * _strlen - returns the length of a string
 * @s: parameter to check
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int length;

	length = 0;
	while (*(s + length) != '\0')
		length++;

	return (length);
}
