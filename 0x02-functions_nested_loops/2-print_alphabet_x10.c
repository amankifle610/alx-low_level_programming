#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *
 * Return
*/
void print_alphabet_x10(void)
{
	char a;
	int i, j;

	for (i = 0; i < 10; i++)
	{
		a = 'a';
		for (j = 0; j < 26 ; j++)
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
	}
}
