<<<<<<< HEAD
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/**
 *  main - Entry point
 *
 *  Description: positive or negative
 *
 *  Return: Always 0 (Success)
*/

int main(void)
{
int n;
srand(time(0));
n=rand()-RAND_MAX/2;
if(n>0)
{
	printf("%i is positive\n",n);
}
else if (n==0)
{
	printf("%i is zero\n",n);
}
else
{ 
	printf("%i is negative\n",n);
}

=======
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: Determines if a random number is positive, negative, or zero
 *
 * Return: 0 (Success)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
{
printf("%i is positive\n", n);
}
else if (n == 0)
{
printf("%i is zero\n", n);
}
else
{
printf("%i is negative\n", n);
}
>>>>>>> 3f6c1fe65022d2ed7eff0d7710d544002814f909
return (0);
}
