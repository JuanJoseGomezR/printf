#include "holberton.h"
#include <unistd.h>
/**
  * _cprintf - prints char format
  * @format: type of format
  * Return: length
  */
int _cprintf(va_list format)
{
	return(write(1, &c, 1));
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

	ptr = va_arg(args, char *);

	for (i = 0; s[i]; i++)
	{
	write(1, s, 1);
		s++;
	}
	return (i);
}
