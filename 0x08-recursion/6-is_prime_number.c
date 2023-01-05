#include "main.h"
/**
 * is_prime - prime
 * @x : num
 * @l : loop
 * Return: 1 if even or 0 if odd
*/
int is_prime(int x, int l)
{
	if (x % l == 0)
	{
		if (x == l)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(x, l + 1));
}
/**
 * is_prime_number - prime
 * @prime: num
 * Return: 1 if even or 0 if odd
*/
int is_prime_number(int prime)
{
	if (prime == 0)
		return (0);
	if (prime < 0)
		return (0);
	if (prime == 1)
		return (0);
	return (is_prime(prime, 2));
}
