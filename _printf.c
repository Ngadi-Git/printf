#include "main.h"
#include <stddef.h>
#include <stdio.h>


/**
 * _printf - function that prints output
 * @format: is a charachter string with 0 to 3 directives
 * Return: the number of charachters to be printed
 */

int _printf(const char *format, ...)
{
	va_list valist;
	int i, buffend = 0;
	double ttlBuffer = 0;
	double *ttl;
	char *holder;
	char buffer[BUFSIZE];
	char *(*spec_func)(va_list) = NULL;

	if (!format)
		return (-1);
	va_start(valist, format);
	ttl = &ttlBuffer;
	for (i = 0; i < BUFSIZE; i++)
		buffer[i] = 0;
	for (i = 0; format && format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			spec_func = get_spec_func(format[i]);
			holder = (spec_func) ? spec_func(valist) : nothing_found(format[i]);
			if (holder)
				buffend = alloc_buffer(holder, _strlen(holder), buffer, buffend, ttl);
		}
		else
		{
			holder = chartos(format[i]);
			buffend = alloc_buffer(holder, 1, buffer, buffend, ttl);
		}
	}
	_puts(buffer, buffend);
	va_end(valist);
	return (ttlBuffer + buffend);
}
