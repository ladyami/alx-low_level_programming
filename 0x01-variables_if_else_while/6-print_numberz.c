#include <stdio.h>
/**
* main - entry point
* Description: a program that prints all single digit numbers
* Return: 0
*/

int main(void)
{
int numbers;
for (numbers = 0; numbers < 10; numbers++)
{
putchar(numbers + '0');
}
putchar('\n');
return (0);
}
