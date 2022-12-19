#include "main.h"
/**
 * print_rev - reverse
 * @s : string pointer
 * Return:
*/
void print_rev(char *s)
{
	int x;

	x = _strlen(s);
	s = s + x - 1;
	for (; *s != '\0'; s--)
		_putchar(*s);
	_putchar('\n');
}
