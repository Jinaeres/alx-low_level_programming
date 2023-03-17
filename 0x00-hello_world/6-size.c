#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
	printf("Size of int: %ld bytes\nSize of float: %ld bytes\nSize of double: %ld bytes\nSize of char: %ld bytes\nSize of a long int: %lu bytes\nSize of a long long int: %lu bytes\n", sizeof(int), sizeof(float), sizeof(double), sizeof(char),sizeof(long),sizeof(long long int));
	return(0);
}
