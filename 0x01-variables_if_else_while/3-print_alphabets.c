#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char upper;
	char lower;

	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		putchar(upper);
	}

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		putchar(lower);
	}

	putchar('\n');

	return (0);
}
