#include "main.h"
/**
 * _memcpy - this function copies a memory from src to dest
 *@src: memory source
 *@dest: memory destination
 *@n: amount in bytes
 *Return: to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int d;

		for (d = 0; d < n; d++)
		{
		dest[d] = src[d];
		}
	return (dest);
}
