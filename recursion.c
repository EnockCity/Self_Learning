#include <stdio.h>

unsigned long long int factorial(unsigned int i);

/**
* main - Entry point
* int factorial - calculates factorial of a number
* Return: factorial
*/

int main(void)
{
unsigned int i, f;

printf("Enter the number whose factorial you want to calculate: ");
scanf("%u", &i);

f = factorial(i);

printf("factorial = %u\n", f);

return (0);
}

unsigned long long int factorial(unsigned int i)
{
if (i <= 1)
{
return (1);
}
else
{
return (i * factorial(i - 1));
}
}
