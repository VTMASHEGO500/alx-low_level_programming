#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - print the last digit of the number  in the variable
 *
 * Return: 0
*/
int main(void)
{
	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	a = n % 10;
	if (a > 5)
	{
		printf("Last digit of %d is %d and is greater tha 5\n", n, a);
	}
	else if (a == 0)
	}
		printf("Last digit of %d is %d and is 0/n", n, a);
	{
	else
		printf("Last digit of %d is %d  and is less than 6 and not 0\n", n, a);
	return (0);
}
