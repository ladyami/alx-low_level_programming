#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
* main - entry point
* Description: program will assign a random number to the variable n
* if it is positive, negative, or zero
* Return: Always 0 (Success)
*/

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
printf("%i is positive\n", n);
else if (n < 0)
printf("%i is negative\n", n);
else
printf("%i is zero\n", n);
return (0);
}
