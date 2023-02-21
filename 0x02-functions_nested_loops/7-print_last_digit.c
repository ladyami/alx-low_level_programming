#include "main.h"
/**
* print_last_digit - print the last digit of a number
* @n: int type number
* Return: return value of last digit
*/
int print_last_digit(int n)
{
int nd;

if (n < 0)
{
nd = -1 * (n % 10);
_putchar(nd + '0');
return (nd);
}
else
{
nd = n % 10;
_putchar(nd + '0');
return (nd);
}
}
