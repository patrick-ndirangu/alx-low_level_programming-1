#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		if (lower == 'q')
		{
			continue;
		}

		if (lower == 'e')
		{
			continue;
		}
		putchar(lower);
	}

	putchar('\n');

	return (0);
}
