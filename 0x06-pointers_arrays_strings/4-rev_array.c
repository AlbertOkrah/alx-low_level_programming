#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverses array
 * @a: array of integers
 * @n: number of elements in array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int part = n / 2;
	int left, right, i;

	n -= 1;

	for (i = 0; i < part; i++)
	{
		left = a[n - i];
		right = a[i];
		a[i] = left;
		a[n - i] = right;
	}
}
