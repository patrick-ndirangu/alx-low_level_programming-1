#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	char lower;
	for (x = 0; x < 10; x++)
	{
		putchar((x % 10) + '0');
	}

	for (lower = 'a'; lower <= 'f'; lower++)
	{
		putchar(lower);
	}

	putchar('\n');

	return (0);
}
