#include "main.h"
#include <string.h>
/**
 * puts_half - half
 * @str : string
 * Return:
*/
void puts_half(char *str)
{
	int x = strlen(str);
	char *s = str;

	if (x % 2 == 0)
		s = s + x / 2;
	else
		s = s + (x - 1) / 2;
	while (*s != '\0')
		_putchar(*s);
	_putchar('\n');
}
