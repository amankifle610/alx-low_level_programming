#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 
 *
 * Return: 0
*/
int main(void)
{
	int a;

	a = 0;
	while (a < 10)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
