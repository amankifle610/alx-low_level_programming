#include "main.h"
/**
 * print_times_table - prints the n times table
 * @n : any number
 * Return:
*/
void print_times_table(int n)
{
	int i, j, x, y;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			x = j * i;
			y = x;
			if (x == 0)
			{
				_putchar(x + '0');
				if (i == n)
					_putchar('\n');
				else
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			while (x > 0)
			{
				y = x % 10;
				x = x / 10;
				_putchar(y + '0');
				if (i == 0)
					_putchar('\n');
				else
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
