#include "main.h"
/**
 * swap_int - swap
 * @a : ponter 1
 * @b : ponter 2
 * Return:
*/
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
