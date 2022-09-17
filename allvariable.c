#include<stdio.h>
int main()
{
int a=34;
float b=2.34;
char c= 'a';
double d = 3.264;
unsigned int e = 68;
short int f = 4;
long int g = 789;
unsigned char h = 'g';
long double i = 3.26545;

printf("%d\n", a);
printf("%f\n", b);
printf("%c\n", c);
printf("%1f\n", d);
printf("%u\n", e);
printf("%hd\n", f);
printf("%ld\n", g);
printf("%c\n", h);
printf("%Lf\n", i);
return 0;
}
