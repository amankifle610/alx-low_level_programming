#include "main.h"
/**
 * _isupper - checks for uppercase character.
 * @c : alpha
 * Return: 0
*/
int _isupper(char c)
{
	if (c <= 'Z' && c >= 'A')
		return (1);
	return (0);
}
