#include <stdio.h>
/**
* main - entry point
* Description: prints all possible combinations of two two-digit numbers
* Return: 0
*/

int main(void)
{
int two, digit;
for (two = 0; two < 100; two++)
{
for (digit = 0; digit < 100; digit++)
{
if (two < digit)
{
putchar((two / 10) + 48);
putchar((two % 10) + 48);
putchar(' ');
putchar((digit / 10) + 48);
putchar((digit % 10) + 48);
if (two != 98 || digit != 99)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
