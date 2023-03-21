#include "main.h"

/**
 *print_alphabet- prints alphabets from a-z
 *
 *Return: Always voi
 */
void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
		_putchar('\n');

}
