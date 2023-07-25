#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>
#include "main.c"

/**
 * _puts - print a buffer
 * @buffer: buffer passed
 * @size: number of bytes to print
 */

void _puts(char *buffer, int size)
{
        write(1, buffer, size);
}
