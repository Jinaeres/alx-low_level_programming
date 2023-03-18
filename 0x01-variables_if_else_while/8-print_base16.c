#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int number = 0;
	char hex = 'a';
	while (number <= 9)
	{
		putchar((char)number + '0');
		number++;
	}
	while (hex <= 'f' && hex >= 'a')
	{
		putchar(hex);
		hex++;
	}
	putchar('\n');
	return (0);
}
