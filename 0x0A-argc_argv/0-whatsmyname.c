#include <stdio.h>

/**
 * main - checks the code
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if successful
 */
int main(int argc, char **argv)
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
