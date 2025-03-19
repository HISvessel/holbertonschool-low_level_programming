#include "main.h"
int _check_prime(int n, int d);

/**
 * is_prime_number - checks if a num is prime
 *@n: number to modulate
 *Return: 1 if prime, else 0
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (1);
	}
		return (_check_prime(n, 2));
}

/**
 * _check_prime - check for the prime factor
 *@n: number to modulate
 *@d: integer for denomination
 *Return: 0
 */
int _check_prime(int n, int d)
{
	if (d * d > n)
	{
		return (1);
	}
	if (n % d == 0)
	{
		return (0);
	}
	return (_check_prime(n, d + 1));
}
