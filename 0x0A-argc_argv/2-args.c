#include <stdio.h>
/**
 * main- a program that prints all arguments it receives.
 * @argc: int
 * @argv: list
 * Return: 0
 */
int main(int argc, char const *argv[])
{
for (int i = 0; i < argc; i++)
{
printf("%d\n", argv[i]);
}
return (0);

}
