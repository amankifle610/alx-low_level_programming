#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverse
 * @a : string
 * @n : no
 * Return:
*/
void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (j = 0, i = n - 1; i > j; i--, j++)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
