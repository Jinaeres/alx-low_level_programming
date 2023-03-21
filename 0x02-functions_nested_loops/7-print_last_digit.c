#include "main.h"
/**
 *print_last_digit - prints and return the last degit 
 *@c: the number to check
 *Return: Always int c if +  or -c otherwise (Success)
 */
int print_last_digit(int c)
{
	int n = c % 10;

	_putchar('0' + n);
	return (n);
}
