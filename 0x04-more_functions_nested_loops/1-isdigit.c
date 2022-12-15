#include <stdio.h>
#include "main.h"
/**
 * _isdigit - digit
 * @c : digit
 * Return: 0
*/
int _isdigit(char c)
{
	if (c <= '9' && c >= '0')
		return (1);
	return (0);
}
