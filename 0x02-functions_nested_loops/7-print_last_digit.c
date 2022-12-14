#include "main.h"
/**
 * print_last_digit - print_last_digit
 * @c : number
 * Return: 0
*/
int print_last_digit(int c)
{
	int a;

	if (c == -2147483648)
		c = 48;
	if (c < 0)
		c = -c;
	a = c % 10;
	_putchar(a + '0');
	return (a);
}
