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
	char *ptr;

	ptr = va_arg(format, char *);

	for (i = 0; ptr[i]; i++)
	{
		write(1, &ptr, 1);
		ptr++;
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

	write(1, &symbol, 1);
	return (1);
}
/**
 * _dprintf - unsigned int
 * @format: unsigned
 * Return: int
 */
int _dprintf(va_list format)
{
	unsigned int signe, count;
	unsigned int i;

	i = va_arg(format, unsigned int)
	signe = 0;
	if (signe >= 0)
	{
		count++;
		write(1, &signe, 1);
		i += 1;
	}
	return (i);
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
		write(1, &negativ, 1);
		i = -i;
	}
	while (num != 0)
	{
		num = num / 10;
		count += 1;
	}
	_iprintf((unsigned int)i);
	return (count);
}
