#include "main.h"
/**
 *_islower- Entry point
 *Parameter: 'c' is parametre
 *Return: Always int 0 or 1 (Success)
 */
int _islower(int c)
{
	if ((int) c >= 97 && (int) c <= 122)
		return (1);
	else
		return (0);
}
