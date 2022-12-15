#include <stdio.h>
#include "main.h"
/**
 * _isdigit - digit
 * @c : digit
 * Return: 0
*/
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	return (0);
}
