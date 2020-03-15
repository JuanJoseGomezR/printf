#include "holberton.h"
/**
 * _strlen - function that returns the length of a string.
 * @s : s is a character
 * Return: value is i
 */
int _strlen(char *s)
{
	int i;

	while (*(s + i))
	{
		i++;
	}
	return (i);
}
/**
 * _brpintf - convert into binaries
 * @format: unsd int to binary
 * Return: binary length
 */
int _bprintf(va_list format);
{
	unsigned int binary [2];
	unsigned int num;
	int i = 0;

	num = va_arg(format, unsigned int);

	if ((format == NULL) || (format[0] = '%' && format[1] == '\0'))
		return (0);

	for (i = 0; num[i]; i++)
	{
		binary[i] = num % 2;
		num /= 2;
	}
	for (i = i - 1; i >= 0; i--)
	{
		write(1, &binary, 1);
	}
	return (strlen(binary));
}
