#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @src: source being copied
 * @dest: memory area where bytes are stored
 * n: number of bytes
 *
 * Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
