#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

/**
 * char_find - converts a char to a string
 * @c: char
 * Return: str
 */
char *char_find(va_list c)
{
	char str[2];
	char *p;

	p = str;
	str[0] = va_arg(c, int);
	str[1] = '\0';
	return (p);
}

/**
 * string_find - passes a string to print
 * @s: string
 * Return: "str"
 */
char *string_find(va_list s)
{
	char *str;

	str = va_arg(s, char *);
	if (str == NULL)
		return ("(null)");
	return (str);
}

/**
 * percent_find - passes a '%' sign
 * Return: percent sign as a character
 */
char *percent_find(void)
{
	char *str;

	str = "%";
	return (str);
}

/**
 * int_find - converts integers to character arrays
 * @npoint: integer to convert from va_args
 * Return: pointer to str
 */
char *int_find(va_list npoint)
{
	int n;
	int i, res, tmp, expo, count;
	char *str;

	n = va_arg(npoint, int);
	count = i = 0;
	expo = 1;
	n >= 0 ? (res = n * -1) : (res = n, count++);
	tmp = res;
	while (tmp <= -10)
	{
		expo *= 10;
		tmp /= 10;
		count++;
	}
	str = malloc((count + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	if (n < 0)
		str[i++] = '-';
	while (expo >= 1)
	{
		str[i++] = (((res / expo) % 10) * -1 + '0');
		expo /= 10;
	}
	return (str);
}
/**
 * unsigned_find - converts unsigned to char array
 * @unsign: unsigned int to convert from va_args
 * Return: pointer to str
 */
char *unsigned_find(va_list unsign)
{
	unsigned int i, res, tmp, expo, count;
	char *str;

	res = va_arg(unsign, unsigned int);
	count = i = 0;
	expo = 1;
	tmp = res;
	while (tmp >= 10)
	{
		expo *= 10;
		tmp /= 10;
		count++;
	}
	str = malloc((count + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (expo >= 1)
	{
		str[i++] = (((res / expo) % 10) + '0');
		expo /= 10;
	}
	return (str);
}
