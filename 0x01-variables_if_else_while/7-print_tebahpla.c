#include <stdio.h>
/**
* main - entry point
* Description: a program that prints the lowercase alphabet in reverse
* Return: 0
*/

int main(void)
{
char c;
for (c = 'z'; c >= 'a'; c--)
{
putchar(c);
}
putchar('\n');
return (0);
}
