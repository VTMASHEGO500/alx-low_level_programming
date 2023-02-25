#include <stdio.h>
/**
 *main - print the number from 1 to 100 followed by new line
 *but multiply three print Fuzz instead of the number
 *and multiply of five prints Buzz
 * Return: always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 != 0)
		{
			printf(" Fuzz");
		} else if (n % 5 == 0 && n % 3 != 0)
		{
			printf(" Buzz");
		} else if (n % 3 == 0 && n % 5 == 0)
		{
			printf(" FuzzBuzz");
		} else if (n == 1)
		{
			printf("%d", n);
		} else
		{
			printf(" %d", n);
		}
	}
	printf("\n");

	return (0);
}
