#include "main.h"
/**
 * _pow_recursion - returns the value of x raised too the power of y
 *@x: base
 *@y: power
 * Return: x raised to the power of y, -1 if y < 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
