#include"main.h"

/**
 * *_memset- fills memory with a constant byte
 * @s: arguments
 * @b: arguments
 * @n: arguments
* Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
char *ptr = s;
while (n--)
*s++ = b;
return (ptr);
}


/**
 * *_calloc-  a function that allocates memory for an array, using malloc.
 * @nmemb: arguments
 * @size: arguments
* Return: zeft teen
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *m;
if (size == 0 || nmemb == 0)
return (NULL);
m = malloc(sizeof(int) * nmemb);
if (m == 0)
return (NULL);
*_memset(m, 0, sizeof(int) * nmemb);
return (m);
}
