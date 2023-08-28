#include <stdio.h>
/**
*_sqrt - finds the square root
*
* @x: input number
*
*Return: square root of x
*/

double _sqrt(double x)
{
float sqrt, tmp;
sqrt = x / 2;
tmp = 0;
while (sqrt != tmp)
{
tmp = sqrt;
sqrt = (x / tmp + tmp) / 2;
}
return (sqrt);
}

/**
 * largest_prime_factor - finds and print the largest prime factor
 *
 *@num: number to find
*/

void largest_prime_factor(long int num)
{
int prm, larg;
while (num % 2 == 0)
{
num = num / 2;
}
for (prm = 3; prm <= _sqrt(num); prm += 2;)
{
while (num % prm == 0)
{
num = num / prm;
larg = prm;
}
}
if (num > 2)
larg = num;
printf("%d\n", larg);
}
/**
* main - Entry point
*
* Return: Always 0 (success)
*/
int main(void)
{
largest_prime_factor(612852475143);
return (0);



}
