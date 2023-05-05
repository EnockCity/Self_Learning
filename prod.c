#include <stdio.h>

/**
 * main -Entry point
 * product:calculates product of three random integers
 * @x:first integer
 * @y:second integer
 * @z:third integer
 * Return:product
 */

int main(void)
{
	printf("Enter three integers:");

	int x, y, z;

	scanf("%d%d%d", &x, &y, &z);

	int poduct = x * y * z;

	printf("The product is %d\n", poduct);
}
