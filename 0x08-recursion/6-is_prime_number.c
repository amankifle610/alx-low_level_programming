#include "main.h"
/**
 * prime - prime
 * @x : num
 * @l : loop
 * Return: 1 if even or 0 if odd
*/
int prime(int x, int l)
{
	if (x % l == 0)
	{
		if (x == l)
			return (1);
		else
			return (0);
	}
	return (0 + prime(x, l + 1));
}
/**
 * is_prime_number - prime
 * @prime: num
 * Return: 1 if even or 0 if odd
*/
int is_prime_number(int prime)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (prime(n, 2));
}
