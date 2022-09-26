#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: name of array
 * @size: size of array
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int b = 0;
	int c = size - 1;
	int sum = 0;
	int sum1 = 0;

	while (b <= (size * size))
	{
		sum = sum + *(a + b);
		b = b + size + 1;
	}

	while (c < (size * size - 1))
	{
		sum1 += *(a + c);
		c = c + size - 1;
	}

	printf("%d, %d\n", sum, sum1);
}
