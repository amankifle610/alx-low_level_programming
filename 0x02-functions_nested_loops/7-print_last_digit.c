#include "main.h"
/**
 * print_last_digit - print_last_digit
 * @c : number
 * Return: 0
*/
int print_last_digit(int c)
{
	int a;

	if (c < 0)
		c = c * -1;
	a = c % 10;
	_putchar(a + '0');
	return (a);
}
