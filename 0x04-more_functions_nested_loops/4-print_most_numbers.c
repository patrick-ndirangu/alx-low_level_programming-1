#include "main.h"

/**
 * print_most_numbers - prints from 0 to 9, except 2 and 4
 *
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
	int n;

	for (n = 48; n < 57; n++) /* ASCII values for 0 and 9 respectively */
	{
		if (n == 50 || n == 52) /* ASCII values for 2 and 4 respectively */
		{
			continue;
		}

		_putchar(n);
	}

	_putchar('\n');
}
