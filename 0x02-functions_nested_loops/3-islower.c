#include "main.h"
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int _islower(int c)
{
	if ((int) c >=97 && (int) c <= 122)
		return (1);
	else
		return (0);
}
