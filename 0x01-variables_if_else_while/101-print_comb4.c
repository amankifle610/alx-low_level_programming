#include <stdio.h>
/**
 * main - entry
 *
 * Return: 0
*/
int main(void)
{
	int a, b, c, d;

	a = 0;
	b = 1;
	while (a < 8)
	{
		d = b;
		while (b < 9)
		{
			c = b + 1;
			while (c < 10)
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(c + '0');
				c++;
				if(a != 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
			b++;
		}
		b = d + 1;
		a++;
	}
	putchar('\n');
	return (0);
}

