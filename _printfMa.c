#include "holberton.h"
/**
 * _cprintf - prints char format
 * @format: type of format
 * Return: length
 */
int _cprintf(va_list format)
{
	return (_putchar(va_arg(format, int)));
}
/**
 * _sprintf - print string format
 * @format: string
 * Return: length
 */
int _sprintf(va_list format)
{
	int i;
	int count = 0;
	char *ptr = va_arg(format, char *);

	if (ptr == NULL)
		return (write(1, "(null)", 6));
	for (i = 0; ptr[i]; i++)
	{
		count += _putchar(ptr[i]);
	}
	return (count);
}
/**
 * _Prprintf - percentage
 * @format: symbol
 * Return: symbol
 */
int _Prprintf(__attribute__((unused))va_list format)
{
	_putchar('%');
	return (1);
}
/**
 * _dprintf - unsigned int
 * @num: unsigned int
 * Return: void
 */
int _dprintf(unsigned int num)
{
	int lengt;
	unsigned int n = num;
	int oper;

	oper = 1;
	lengt = 0;

	for (; n / oper > 9 ;)
		oper *= 10;
	for (; oper != 0 ;)
	{
		lengt = lengt + _putchar('0' + n / oper);
		n = n % oper;
		oper = oper / 10;
	}
	return (lengt);
}
/**
 * _printfnum - print integer format
 * @format: integer
 * Return: int
 */
int _printfnum(va_list format)
{
	int i, lengt, oper;
	unsigned int num;

	oper =  1;
	lengt = 0;

	i = va_arg(format, int);

	if (i < 0)
	{
		lengt = _putchar('-');
		num = i * -1;
	}
	else
		num = i;
	for (; num / oper > 9;)
		oper = oper * 10;
	for (; oper != 0;)
	{
		lengt = lengt + _putchar('0' + num / oper);
		num = num % oper;
		oper = oper / 10;
	}
	return (lengt);
}
