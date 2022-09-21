#include "main.h"

/**
 * reverse_array - reverses the content of array of integers
 * @a: parameter to check
 * @n: number of elements in array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	
	for (i = 0; i < n / 2; i++)
	{
		int temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
