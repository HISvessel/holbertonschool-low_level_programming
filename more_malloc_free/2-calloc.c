#include "main.h"

/**
 * _calloc - this function allocates data on continguous memory
 * @nmemb: number of elements
 * @size: data size
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *sent;

	if (nmemb == 0 || size == 0)
		return (NULL);

	sent = malloc(nmemb * size);

	if (!sent)
		return (NULL);

	for (i = 0; i < (size * nmemb); i++)
		sent[i] = 0;

	return (sent);
}
