#include <stdio.h>
/**
*  swap_int -swaps the values of two integers using two parameters
*
* @a: int parameter 1
* @b: int parameter 2
*
*Return: nothing
*/

void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;

}
