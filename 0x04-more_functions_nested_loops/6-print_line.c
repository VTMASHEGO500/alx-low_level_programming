#include "main.h"
/**
 *print_line - draw a straight line
 *@n: number of time character should be printed
 */
void print_line(void)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
