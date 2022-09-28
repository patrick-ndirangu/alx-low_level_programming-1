#include "main.h"

/**
 * is_prime_number - returns 1 if input integer is a prime
 * number, otherwise returns 0
 * @n: parameter to check
 *
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n <= 2)
	{
		return (0);
	}

	return (primeno(n, 2));
}

/**
 * primeno - returns 1 if input integer is a prime
 * number, otherwise returns 0
 * @a: same as n
 * @b: iterates from 1 to n
 *
 * Return: 1 or 0
 */
int primeno(int a, int b)
{
	if (a == b)
	{
		return (1);
	}

	else if (a % b == 0)
	{
		return (0);
	}

	return (primeno(a, b + 1));
}
