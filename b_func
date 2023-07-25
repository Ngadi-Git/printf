#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>
#include "main.h"

/**
 * _memcpy - copies memory area
 * @dst: destination memory area
 * @src: source memory area
 * @n: number of bytes to copy
 * @bufferlen: current number of bytes taken by buffer
 * Return: pointer to destination memory area
 */

char *_memcpy(char *dst, char *src, unsigned int n, unsigned int bufferlen)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dst[i + bufferlen] = src[i];
	return (dst);
}

/**
 * a_buff - assigns characters to buffer, with overflows
 * @hld: string to allocate into buffer
 * @hlen: hold length
 * @buffer: buffer char array
 * @size: end of buffer
 * @ttl: pointer to ttl character counter
 * Return: buffer length
 */

int a_buff(char *hld, int hlen, char *buffer, int size, double *ttl)
{
	int sizecpy = 0;

	if (hlen + size > BUFSIZE)
	{
		sizecpy = BUFSIZE - size;
		_memcpy(buffer, hld, sizecpy, size);
		_puts(buffer, BUFSIZE);
		hld += sizecpy;
		_memcpy(buffer, hld, hlen - sizecpy, 0);
		size = hlen - sizecpy;
		*ttl += BUFSIZE;
	}
	else
	{
		_memcpy(buffer, hld, hlen, size);
		size += hlen;
	}
	return (size);
}
