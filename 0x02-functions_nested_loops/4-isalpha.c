#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c : alphabet
 * Return: 0
*/
int _isalpha(int c)
{
	if (c <= 123 && c >= 97 || c >= 65 && c <= 91)
		return (1);
	else
		return (0);
}
