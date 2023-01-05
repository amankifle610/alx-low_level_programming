#include "main.h"
/**
 * _sqrt - square root
 * @x : num
 * @y : num
 * Return: square root
*/
int _sqrt(int x, int y)
{
	if (x == (y * y))
		return (y);
	else if ((y * y) >= x)
		return (-1);
	else
		return (_sqrt(x, y + 1));
}
/**
 * _sqrt_recursion - square root
 * @n : number
 * Return: square root
*/
int _sqrt_recursion(int n)
{
	static int x = 0;

	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}
