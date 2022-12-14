#include "main.h"
/**
 * _abs - computes the absolute value
 * @c : number
 * Return: 0
*/
int _abs(int c)
{
	int a;

	if (c < 0)
		a = c * -1;
	else
		a = c;
	return (a);
}
