#include <stdio.h>
/**
* main - entry point
* Description: prints all possible combinations of single-digit numbers
*  Return: 0
*/

int main(void)
{
int digit = 0;
while (digit < 10)
{
putchar(digit + '0');
if (digit < 9)
{
putchar(44);
putchar(32);
}
digit++;
}
putchar('\n');
return (0);
}
