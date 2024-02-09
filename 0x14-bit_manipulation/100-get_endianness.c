#include "main.h"

/**
 * get_endianness - a function that checks the endianness
 *
 * Return: 0 if big endian, 1 if small
 */

int get_endianness(void)
{
	unsigned long int n = 1;

	return (*(char *)&n);
}
