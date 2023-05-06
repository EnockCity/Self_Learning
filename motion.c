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
float u, a, t, s, v;

printf("Enter u\n");
scanf("%f", &u);
printf("Enter a\n");
scanf("%f", &a);
printf("Enter t\n");
scanf("%f", &t);
v = u + (a * t);
s = (u * t) + (0.5 * a * t * t);

printf("The final velocity is %.1f\n", v);
printf("The displacement is %.1f\n", s);


}
