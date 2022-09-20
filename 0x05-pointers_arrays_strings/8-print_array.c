#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_array - prints n elements of an array of integers
 * @a: parameter to check
 * @n: number of elements to be printed
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int add;

	for (add = 0; add < n ; add++)
	{
		if (add != n - 1)
			printf("%d, ", a[add]);
		else
			printf("%d", a[add]);
	}
	putchar(10);
}
