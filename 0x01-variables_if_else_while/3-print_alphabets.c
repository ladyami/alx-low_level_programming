#include <stdio.h>
/**
* main - entry ponit
* Description:  a program that prints the alphabet in lowercase an uppercase
*  Return: 0
*/

int main(void)
{
char c = 'a';
while (c <= 'z')
{
putchar(c);
c++;
}
c = 'A';
while (c <= 'Z')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
