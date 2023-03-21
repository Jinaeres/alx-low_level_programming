#include "main.h"
/**
 *_islower- Entry point
 *@c: the character to check
 *Return: Always int 1 if lowercase or 0 otherwise (Success)
 */
int _islower(int c)
{
	if ((int) c >= 97 && (int) c <= 122)
		return (1);
	else
		return (0);
}
