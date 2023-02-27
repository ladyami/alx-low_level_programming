#include "main.h"

/**
* swap_int - swaps the values of two integers
* @a: first integer to be swap
* @b: second integer to be swap
*/

void swap_int(int *a, int *b)
{
int ami = *a;
*a = *b;
*b = ami;
}
