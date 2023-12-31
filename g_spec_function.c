#include "main.h"
#include <stddef.h>


/**
 * gs_fun - check specifier type and return function
 *@s: type to check
 *Return: pointer to function to use
 */

char *(*gs_fun(char s))(va_list)
{
	int i;
	s_types spec_types[] = {
		{"c", char_find},
		{"s", string_find},
		{"%", percent_find},
		{"d", int_find},
		{"i", int_find},
		{NULL, NULL}
	};

	for (i = 0; spec_types[i].spec; i++)
		if (s == *spec_types[i].spec)
			return (spec_types[i].f);

	return (spec_types[i].f);
}
