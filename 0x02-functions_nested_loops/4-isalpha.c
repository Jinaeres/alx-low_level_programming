#include "main.h"
/**
 *_isalpha- Entry point
 *@c: the character to check
 *Return: Always int 1 if alpha  or 0 otherwise (Success)
 */
int _isalpha(int c)
{
	if ((int) c >= 97 && (int) c <= 122)
		return (1);
	else if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
