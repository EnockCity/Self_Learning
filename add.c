#include <stdio.h>
/**
 * main - entry point
 * @num - takes integer1 and integer2 from user
 * @sum - adds the two integers
 * Return: the sum
 */

int main(void)
{
	int num1;
	int num2;

	printf("Enter num1\n");
	scanf("%d", &num1);

	printf("Enter num2\n");
	scanf("%d", &num2);

	int sum;

	sum = num1 + num2;

	printf("The sum is %d\n", sum);

}
