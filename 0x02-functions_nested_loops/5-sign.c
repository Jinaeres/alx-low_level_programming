#include "main.h"
/**
 *_islower- Entry point
 *@n: the number to check
 *Return: Always int 1 if positive  or -1 if negative or  (Success)
 */
int print_sign(int n)
{
	if (n > 0)
		_putchar('+');
		return (1);
	else if (n < 0)
		_putchar('-');
		return (-1);
	else
		_putchar('0');
		return (0);
}
