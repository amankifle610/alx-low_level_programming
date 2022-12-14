#include <stdio.h>
/**
 * main - prints the sum of all the multiples of 3 or 5
 *
 * Return: 0
*/
int main(void)
{
	int a, sum;

	a = 0;
	sum = 0;
	while (a < 1024)
	{
		if (a % 3 == 0 || a % 5 == 0)
			sum = sum + a;
		a++;
	}
	printf("%d\n", sum);
	return (0);
}
