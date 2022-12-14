#include "main.h"
/**
 * times_table - prints the 9 times table
 *
 * Return: 0
*/
void times_table(void)
{
	int i, j, x;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			x = j * i;
			if (x > 9)
				_putchar((x / 10) + '0');
			else if (j > 0)
				_putchar(' ');
			_putchar((x % 10) + '0');
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
