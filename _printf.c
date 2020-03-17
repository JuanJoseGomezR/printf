#include "holberton.h"
/**
 * _printf - function of option struct
 * @format: parameter pointer
 * Return: option of struct
 */
int _printf(const char *format, ...)
{
	_format option[] = {
		{'c', _cprintf},
		{'s', _sprintf},
		{'d', _iprintf},
		{'%', _Prprintf},
		{'i', _iprintf},
		{'b', _bprintf},
		{'\0', NULL}
	};
	va_list valist;
	int i, j, x;

	j = 0;
	va_start(valist, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (0);
	for (i = 0; format[i]; i++)
	{
		for (x = 0; option[x].op != '\0'; x++)
		{
			if (format[i] == '%')
			{
				if (format[i + 1] == option[x].op)
				{
					i = i + 2;
					j += option[x].f(valist);
				}
				else if (format[i + 1] == '%')
					i = i + 1;
			}
		}
		j = j + _putchar(format[i]);
	}
	va_end(valist);
	return (j);
}
