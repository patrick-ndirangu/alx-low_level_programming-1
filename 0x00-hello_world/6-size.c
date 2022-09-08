#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int j;
	long long int k;
	float f;

	printf("The size of a char is: %lu.\n", (unsigned long)sizeof(c));
	printf("The size of an int is: %lu.\n", (unsigned long)sizeof(i));
	printf("The size of a long int is: %lu.\n", (unsigned long)sizeof(j));
	printf("The size of a long long int is: %lu.\n", (unsigned long)sizeof(k));
	printf("The size of a float is: %lu.\n", (unsigned long)sizeof(f));

	return (0);
}	
