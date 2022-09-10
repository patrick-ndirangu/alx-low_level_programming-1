#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int r, s;

	for (r = 0; r < 9; r++)
	{
		for (s = r + 1; s < 10; s++)
		{
			putchar((r % 10) + '0');
			putchar((s % 10) + '0');

			if (r == 8 && s == 9)
			{
				break;
			}

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
