#include "main.h"
#include <stdio.h>

/**
* _puts - prints a string
* @str: string to be print
* Description: prints a string
* succed: return no error
*/

void _puts(char *str)
{
int i = 0;
while (*(str + i) != '\0')
{
putchar(*(str + i));
i++;
}
putchar(10);
}
