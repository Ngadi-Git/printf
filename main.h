#ifndef MAIN_H
#define MAIN_H

#define BUFSIZE 1024
#include <stdarg.h>

/**
 * struct spec_types - Struct function to get function of the specifiers
 * @spec: specifier
 * @f: The function associated
 */

typedef struct spec_types
{
	char *spec;
	char *(*f)();
} s_types;

char *int_find(va_list npoint);
char *unsigned_find(va_list unsign);
int _strlen(char *s);
void _puts(char *buffer, int size);
char *char_to_string(char c);
char *_empty(char c);
char *_memcpy(char *dest, char *src, unsigned int n, unsigned int bufferlen);
int a_buff(char *hold, int hlen, char *buffer, int size, double *total);
char *(*gs_fun(char s))(va_list);
int _printf(const char *format, ...);
char *char_find(va_list c);
char *string_find(va_list s);
char *percent_find(void);

#endif
