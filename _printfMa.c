#include "holberton.h"
/**
 * _cprintf - prints char format
 * @format: type of format
 * Return: length
 */
int _cprintf(va_list format)
{
	char store;

	store = (char)va_arg(format, int);

	_write(store);

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
	char *ptr;

	*ptr = va_arg(format, char *);

	if (ptr == NULL)
		ptr = "(NULL)";

	for (i = 0; ptr[i]; i++)
	{
		_write(ptr[i]);
	}
	return (i);
}
/**
 * _Prprintf - percentage
 * @format: symbol
 * Return: symbol
 */
int _Prprintf(va_list format)
{
	char symbol = 37;

	_write(symbol);
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

	_write(dig);

}
/**
 * _iprintf - print integer format
 * @format: integer
 * Return: int
 */
int _iprintf(va_list format)
{
	char negativ;
	int i, count, num;

	i = va_arg(format, int);
	num = i;
	count = 0;
	negativ = '-';

	if (i < 0)
	{
		count++;
		_write(negativ);
		i = -i;
	}
	while (num != 0)
	{
		num = num / 10;
		count += 1;
	}
	_dprintf((unsigned int)i);
	return (count);
}
