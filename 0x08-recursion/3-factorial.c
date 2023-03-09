#include "main.h"
/**
 * factorial - returns the factorial of a given number
 *@n: an argument passed to the function
 * Return: 1 if number is 1 or 0; returns -1 if number is negative
 */
int factorial(int n)
{
	if (n == 0 || n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
