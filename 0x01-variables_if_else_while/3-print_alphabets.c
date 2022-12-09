#include <stdio.h>
/**
 * main - lower and upper case alpha
 *
 * Return: 0
*/
int main(void)
{
	char a, b;

	a = 'a';
	b = 'A';
	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	while (b <= 'Z')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
