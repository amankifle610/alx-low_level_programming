#include <stdio.h>
/**
 * main - entry
 *
 * Return: 0
*/
int main(void)
{
	int i;
	long int a, b, sum;

	a = 1;
	b = 2;
	i = 0;
	sum = b;
	while (a + b < 4000000)
	{
		b = b + a;
		if (b % 2 == 0)
			sum = sum + b;
		a = b - a;
		++i;
	}
	printf("%ld\n", sum);
	return (0);
}
