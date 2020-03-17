#include "holberton.h"
/**
 * _cprintf - prints char format
 * @format: type of format
 * Return: length
 */
int _cprintf(va_list format)
{
	char store;

	store = va_arg(format, int);

	write(1, &store, 1);

	return (1);
}
/**
 * _sprintf - print string format
 * @format: string
 * Return: length
 */
int _sprintf(va_list format)
{
	int i;
	char *ptr = va_arg(format, char *);

	if (ptr == NULL)
		ptr = "(NULL)";

	for (i = 0; ptr[i]; i++)
	{
		_putchar(ptr[i]);
	}
	return (i);
}
/**
 * _Prprintf - percentage
 * @format: symbol
 * Return: symbol
 */
int _Prprintf(__attribute__((unused))va_list format)
{
	char symbol = 37;

	write(1, &symbol, 1);
	return (1);
}
/**
 * _dprintf - unsigned int
 * @num: unsigned int
 * Return: void
 */
void _dprintf(unsigned int num)
{
	int dig;

	if (num / 10 != 0)
	{
		_dprintf(num / 10);
	}

	dig = ((num % 10) + '0');

	write(1, &dig, 1);

}
/**
 * _iprintf - print integer format
 * @format: integer
 * Return: int
 */
int _iprintf(va_list format)
{
	int i, lengt, oper;
	unsigned int num;
	int str;
	char negative = '-';

	oper =  1;
	lengt = 0;

	i = va_arg(format, int);

	if (i < 0)
	{
		lengt = write(1, &negative, 1);
		num = i * -1;
	}
	else
		num = i;
	for (; num / oper > 9;)
		oper = oper * 10;
	for (; oper != 0;)
	{
		str = ('0' + num / oper);
		lengt = lengt + write(1, &str, 1);
		num = num % oper;
		oper = oper / 10;
	}
	return (lengt);
}
