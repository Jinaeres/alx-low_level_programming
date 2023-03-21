#include "main.h"
/**
 *print_last_digit - prints and return the last degit 
 *@c: the number to check
 *Return: Always int c if +  or -c otherwise (Success)
 */
void jack_bauer(void)
{
	int hrs = 0;
	int mins = 0;

	while(hrs < 24)
	{
		mins = 0;
		while(mins < 60)
		{
			_putchar((hrs / 10) + '0');
			_putchar((hrs % 10) + '0');
			_putchar(':');
			_putchar((mins / 10) + '0');
			_putchar((mins % 10) + '0');
			_putchar('\n');
			mins++;
		}
}		hrs++
