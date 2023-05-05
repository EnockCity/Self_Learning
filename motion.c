#include <stdio.h>

/**
 * main -entry point
 * @u:intial velocity
 * @a:acceleration in metres per seconds squared
 * @t:time in seconds
 * @s:displacement in metres
 * Return: v and s
 */

int main(void)
{
	int u;
	int a;
	int t;

	printf("Enter u\n");
	scanf("%d", &u);
	printf("Enter a\n");
	scanf("%d", &a);
	printf("Enter t\n");
	scanf("%d", &t);

	int v = u + (a * t);
	int s = (u * t + 1/2 * a * t ^ 2);

	printf("The final velocity is %d\n", v);
	printf("The displacement is %d\n", s);


}
