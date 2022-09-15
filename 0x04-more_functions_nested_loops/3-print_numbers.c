#include "main.h"
#include <stdlib.h>

/**
 * print_numbers - print numbers from 0 to 9
 *
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		_putchar(x + '0');
	}

	_putchar('\n');
}
