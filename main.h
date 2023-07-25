#ifndef MAIN_H
#define MAIN_H

#define BUFSIZE 1024
#include <stdarg.h>

/**
 * struct spec_types - Struct function to get function of the specifiers
 * @spec: specifier
 * @f: The function associated
 */

char *int_find(va_list npoint);
char *unsigned_find(va_list unsign);
int _strlen(char *s);
void _puts(char *buffer, int size);
char *chartos(char c);
char *nothing_found(char c);
char *_memcpy(char *dest, char *src, unsigned int n, unsigned int bufferlen);
int alloc_buffer(char *hold, int hlen, char *buffer, int size, double *total);
char *(*get_spec_func(char s))(va_list);
int _printf(const char *format, ...);
char *char_find(va_list c);
char *string_find(va_list s);
char *percent_find(void);

#endif
