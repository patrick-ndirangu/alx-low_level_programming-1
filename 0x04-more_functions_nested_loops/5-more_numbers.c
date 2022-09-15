#include "main.h"

/**
 * more_numbers - prints 0 to 14
 * Description: prints 10 times the numbers, from 0 to 14
 * Return: void
 */

void more_numbers(void)
{
	int a = 0;
	int b;

	while (a <= 9)
	{
		b = 0;

		while (b <= 14)
		{
			if (b > 9)
			_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
			b++;
		}
		a++;
		_putchar('\n');
	}
}
