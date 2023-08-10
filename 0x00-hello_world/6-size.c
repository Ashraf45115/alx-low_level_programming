#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: using sizeof to print the size of various types.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
print("Size of a char: %lu byte(s)\n", sizeof(char));
print("Size of a int: %lu byte(s)\n", sizeof(int));
print("Size of a long int: %lu byte(s)\n", sizeof(long int));
print("Size of a long long: %lu byte(s)\n", sizeof(long long));
print("Size of a float: %lu byte(s)\n", sizeof(float));
return (0);
}

