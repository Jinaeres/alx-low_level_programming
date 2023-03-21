#include "main.h"
/**
 *print_last_digit - prints and return the last degit
 *@c: the number to check
 *Return: Always int c if +  or -c otherwise (Success)
 */
int print_last_digit(int c)
{
	int a;

	if (c< 0)
		c= -c;
	
	a = c % 10;
	_putchar(a + '0');

	return (a);
}
