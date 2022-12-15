#include "main.h"
/**
 * print_number - print int
 * @n : num
 * Return:
*/
void print_number(int n)
{
	int x, i;

	i = 1000000000;
	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		if (n < 0)
		{
			_putchar('-');
			x = n * -1;
		}
		else
			x = n;
		for (; i >= 1; i /= 10)
		{
			if (x / i != 0)
				_putchar((m / i) % 10 + '0');
		}
	}
}
