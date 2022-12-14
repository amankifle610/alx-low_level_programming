#include <stdio.h>
/**
 * main - entry
 *
 * Return: 0
*/
int main(void)
{
	int x, y, i;
	long int f;

	x = 1;
	y = 2;
	printf("%d, ", 1);
	printf("%d, ", 2);
	for (i = 0; i < 48; i++)
	{
		f = x + y;
		x = y;
		y = f;
		printf("%ld", f);
		if (i < 47)
			printf(", ");
	}
	printf("\n");
	return (0);
}
