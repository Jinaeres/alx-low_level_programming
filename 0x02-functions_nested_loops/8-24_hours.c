#include "main.h"
/**
 *jack_bauer-prints time
 *
 *Return: void (Success)
 */
void jack_bauer(void)
{
	int hrs = 0;
	int mins = 0;

	while (hrs < 24)
	{
		mins = 0;
		while (mins < 60)
		{
			_putchar((hrs / 10) + '0');
			_putchar((hrs % 10) + '0');
			_putchar(':');
			_putchar((mins / 10) + '0');
			_putchar((mins % 10) + '0');
			_putchar('\n');
			mins++;
		}

		hrs++;
	}
}
