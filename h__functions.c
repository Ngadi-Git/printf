#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen - finds length of the string
 * @s: string
 * Return: lngth of string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *(s + i); i++)
		;
	return (i);
}

/**
 * char_to_string - converts a character to a string
 * @c: character to convert
 * Return: pointer to string
 */
char *char_to_string(char c)
{
	char str[1];
	char *p;

	p = str;
	str[0] = c;
	return (p);
}

/**
 * _empty - no matches found but '%' passed
 * @c: character unmatched to return
 * Return: string with percent and character.
 */
char *_empty(char c)
{
	char str[3];
	char *p;

	p = str;
	str[0] = '%';
	str[1] = c;
	str[2] = '\0';
	return (p);
}

/**
 * _puts - print a buffer
 * @buffer: buffer passed
 * @size: number of bytes to print
 */

void _puts(char *buffer, int size)
{
	write(1, buffer, size);
}
