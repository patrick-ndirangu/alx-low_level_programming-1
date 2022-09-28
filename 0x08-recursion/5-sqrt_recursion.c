#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: parameter to check
 *
 * Return: 1 or -1
 */
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}

/**
 * sqrt2 - evaluates from 1 to n
 * @i: same as n
 * @j: iterates from 1 to n
 *
 * Return: 1 or -1
 */
int sqrt2(int i, int j)
{
	if (j * j == i)
	{
		return (j);
	}

	else if (j * j > i)
	{
		return (-1);
	}

	return (sqrt2(i, j + 1));
}
