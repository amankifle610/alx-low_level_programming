#include <stdlib.h>

#include <time.h>

/* more headers goes there */



/**
 * main - print whether the number is positive or negative
 *
 * Return: 0
*/

int main(void)

{

		int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2;

					if (n > 0)
						printf(n, "is positive");
					else if (n == 0)
						printf(n, "is zero");
					else
						printf(n, "is negative");

					return (0);

}
