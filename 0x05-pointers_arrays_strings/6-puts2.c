#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str : string
 * Return:
*/
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str = str + 2;
	}
	_putchar('\n');
}