#include "main.h"
/**
 * print_array - array
 * @a - array
 * @n - num
 * Return:
*/
void print_array(int *a, int n)
{
	int i, h;

	for (i = 0; i < n; i++)
	{
		h = 100000;
		for (; h >= 1; h /= 10)
		{
			if (a[i] / h != 0)
				_putchar((a[i] / h) % 10 + '0');
		}
	}
	_putchar('\n');
}
