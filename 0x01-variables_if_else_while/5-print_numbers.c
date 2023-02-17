#include <stdio.h>
/**
* main - entry point
* Description: a program that prints all single digit number.
* Return: 0
*/

int main(void)
{
int number;
for (number = 0; number < 10; number++)
{
printf("%i", number);
}
putchar('\n');
return (0);
}
