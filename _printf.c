#include "main.h"
#include <stddef.h>
#include <stdio.h>


/**
 * _printf - function that prints output
 * @format: is a character str directives
 * Return: the number of charachters to be printed
 */

int _printf(const char *format, ...)
{
	va_list valist;
	int i, bffnd = 0;
	double ttlBuffer = 0;
	double *ttl;
	char *_hlder;
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
			s_funct = gs_fun(format[i]);
			_hlder = (s_funct) ? s_funct(valist) : _empty(format[i]);
			if (_hlder)
				bffnd = a_buff(_hlder, _strlen(_hlder), buffer, bffnd, ttl);
		}
		else
		{
			_hlder = char_to_string(format[i]);
			bffnd = a_buff(_hlder, 1, buffer, bffnd, ttl);
		}
	}
	_puts(buffer, bffnd);
	va_end(valist);
	return (ttlBuffer + bffnd);
}
