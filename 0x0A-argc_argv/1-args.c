#include <stdio.h>
/**
 * main- a program that prints the number of arguments passed into it.
 * @argc: int
 * @argv: list
 * Return: 0
 */
int main(int argc, char const *argv[])
{
(void)argc;
printf("%s\n", argc - 1);
return (0);

}
