#include "main.h"
/**
 * print_alphabet - prints the alphabet, in lowercase
 *
 * Return
*/
void print_alphabet(void)
{
	char n;

	n = 'a';
	for (int i = 0; i < 26; i++)
	{
		_putchar(n);
		n++;
	}
}
