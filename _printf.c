#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>
#include <stdio.h>
#include "main.h"

/***
 * _printf - produces output according to a format
 * @format: character string
 * @...: variadic parameter
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int i = 0;
	int count = 0;
	int value = 0;

	if (format == NULL)
		return (-1);

	while (format[i])
	{
		if (format[i] != '%')
		{
		value = write(1, &format[i], 1);
		count = count + value;
		i++;
		continue;
		}
	
		if (format[i] == '%')
		{
			printf("I have encountered a percent\n");
			break;
		}
	}
	return(count);
}

