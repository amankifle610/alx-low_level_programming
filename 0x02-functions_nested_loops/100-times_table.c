#include "main.h"
/**
 * print_times_table - prints the n times table
 * @n : any number
 * Return:
*/
void print_times_table(int n)
{
	int i, j, x, y;

	if (n > 15 || n < 0)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			x = j * i;
			if (x > 99)
			{
				_putchar((x / 100) + '0');
				y = x % 100;
				_putchar((y / 10) + '0');
			}
			else if (x > 9)
			{
				if (j > 0)
				_putchar(' ');
				_putchar((x / 10) + '0');
			}
			else if (j > 0)
			{
				_putchar(' ');
				_putchar(' ');
			}
			_putchar((x % 10) + '0');
			if (j < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
