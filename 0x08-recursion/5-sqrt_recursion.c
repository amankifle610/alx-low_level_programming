#include "main.h"
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
	if (x * x == n)
		return (x);
	else if (x == n)
		return (-1);
	x++;
	_sqrt_recursion(n);
}
