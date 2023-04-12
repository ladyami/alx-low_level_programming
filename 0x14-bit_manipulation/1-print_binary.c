#include "main.h"

/**
* print_binary - Prints the binary equivalent of a decimal number
* @n: Number to print in binary
*/
void print_binary(unsigned long int n)
{
int i;
for (i = 63; i >= 0; i--)
{
if (n & (1 << i))
_putchar('1');
else
_putchar('0');
}
}
