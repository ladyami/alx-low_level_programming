#include <stdio.h>
/**
* main - entry point
* Description: a program that prints all the numbers of base 16
* Return: 0
*/

int main(void)
{
char c;
int numbers;
for (numbers = 0; numbers < 10; numbers++)
{
putchar(numbers + '0');
}
for (c = 'a'; c < 'g'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
