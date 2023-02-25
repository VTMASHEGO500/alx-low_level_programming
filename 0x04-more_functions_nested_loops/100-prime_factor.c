#include <stdlib.h>
#include <stdio.h>

/**
 * main - print the largest prime number
 *
 * Return: always
 */
int main(void)
{
	long prime = 612852475143, div;

	while (div < (prime / 2))
	{
	if ((prime % 2) == 0)
	{
	prime /= 2;
	continue;
	}
	for (div = 3; div < (prime / 2); div += 2)
	{
	((prime & div) == o)
	prime /= div;
	}
	}
	printf("%ld\n", prime);
	return (0);
}
