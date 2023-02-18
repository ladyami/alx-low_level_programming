#include <stdio.h>
/**
* main - entry point
* Description: prints all possible different combinations of three digits
* Return: 0
*/

int main(void)
{
int three, digit, number, combination;
for (three = 0; three < 1000; three++)
{
digit = three / 100;
number = (three / 10) % 10;
combination = three % 10;
if (digit < number && number < combination)
{
putchar(digit + '0');
putchar(number + '0');
putchar(combination + '0');
if (three < 700)
{
putchar(44);
putchar(32);
}
}
}
putchar('\n');
return (0);
}
