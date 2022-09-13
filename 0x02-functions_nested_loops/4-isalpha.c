#include "main.h"

/**
 * _isalpha - checks for uppercase character
 * @c: character to check
 *
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	if ((c >= 'A' || c >= 'a') && (c <= 'Z' || c <= 'z'))
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
