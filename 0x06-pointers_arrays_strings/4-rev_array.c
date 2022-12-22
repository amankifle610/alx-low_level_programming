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
	int i;

	for (i = n - 1; i >= 0; i--)
	{
		printf("%d", a[i]);
		if (i > 0)
			printf(", ");
	}
	putchar('\n');
}
