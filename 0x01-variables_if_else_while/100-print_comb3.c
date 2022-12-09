#include <stdio.h>
/**
 * main - entry
 *
 * Return: 0
*/
int main(void)
{
	int a, b, c;

	a = 0;
	b = 1;
	while (a < 10)
	{
		c = b;
		while (c < 10)
		{
			putchar(a + '0');
			putchar(c + '0');
			c++;
			if (c <= 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
		b++;
		a++;
	}
	return (0);
}
