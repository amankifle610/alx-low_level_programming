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
			if (a != 8 && b != 9)
			{
				putchar(',');
				putchar(' ');
			}
			c++;
		}
		b++;
		a++;
	}
	putchar('\n');
	return (0);
}
