#include "main.h"
#include <stdlib.h>

/**
 * _abs - computes absolute value of an integer
 *@n: check for parameter
 *
 * Return: Always 0 (Success)
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = -n;
		return (n);
	}

	return (n);
}
