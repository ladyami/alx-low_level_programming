#include <stdio.h>
/**
* main - entry point
* Description: prints all possible different combinations of two digits
* Return: 0
*/

int main(void)
{
int two, digit, number;
two = 0;
while (two < 100)
{
digit = two % 10;
number = two / 10;
if (number < digit)
{
putchar(number + '0');
putchar(digit + '0');
if (two < 89)
{
putchar(44);
putchar(32);
}
}
two++;
}
putchar('\n');
return (0);
}
