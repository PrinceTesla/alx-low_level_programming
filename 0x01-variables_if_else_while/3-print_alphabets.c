#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - Entry - point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alp;
char alph;
char n;
n = 012;
for (alp = 'a' ; alp <= 'z' ; alp++)
{
putchar(alp);
}
for (alph = 'A' ; alph <= 'Z' ; alph++)
{
putchar(alph);
}
putchar(n);
return (0);
}
