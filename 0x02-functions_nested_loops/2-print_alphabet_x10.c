#include "main.h"

/**
 * print_alphabet_x10 - print the alphabets 10 times in lowercase
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char lower;
	int n;

	for (n = 1; n <= 10; n++)
	{
		for(lower = 'a'; lower <= 'z'; lower++)
		{
			_putchar(lower);
		}

		_putchar('\n');
	}
}	
