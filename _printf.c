#include "holberton.h"
/**
 * _printf - function of option struct
 * @format: parameter pointer
 * Return: option of struct
 */
int get_print(va_list format, char c)
{
	int i, cont = 0;

	_format option[] = {
		{'c', _cprintf},
		{'s', _sprintf},
		{'d', _iprintf},
		{'%', _Prprintf},
		{'i', _iprintf},
		{'\0', NULL}
		/*{'b', _bprintf}*/
	};
	for (i = 0; option[i].op; i++)
	{
		if (c == option[i].op)
		{
			cont += (option[i].f(format));
		}
	}
	return (cont);
}

int _printf(const char *format, ...)
{
	int cont = 0, i;

	va_list valist;

	va_start(valist, format);

	if (format == NULL)
		return (-1);
	for (i = 0; format && format[i]; i++)
	{
		if (format[i] && format[i] != '%')
		{
			cont += _putchar(format[i]);
			continue;
		}
		if (!format[i])
		{
			return (cont);
		}
		if (format[i] == '%')
		{
			while (format[i + 1] == ' ')
				i++;
			if (format[i + 1] == '\0')
				return (-1);
			cont += get_print(valist, format[i + 1]);
			i++;
		}
	}
	va_end(valist);
	return (cont);
}
