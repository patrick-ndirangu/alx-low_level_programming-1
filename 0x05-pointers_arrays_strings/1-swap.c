#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: 1st integer
 * @b: 2nd integer
 *
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}
