#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with the first character
 * @str: parameter to check
 *
 * Return: void
 */
void puts2(char *str)
{
	int s;

	s = 0;

	while (*(str + s) != '\0')
	{
		if (s % 2 == 0)
			_putchar(*(str + s));
		s++;
	}
	_putchar(10);
}
