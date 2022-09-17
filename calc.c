#include<stdio.h>
int main()
{
    int a, b, c, d, e, f;
    printf("enter the value of a : ");
    scanf("%d", &a);
    printf("enter the value of b : ");
    scanf("%d", &b);
    c = a+b;
    d = a-b;
    e = a*b;
    f = a/b;
    printf("the sum of %d and %d is %d\n", a, b, c);
    printf("the subtraction of %d and %d is %d\n", a, b, d);
    printf("the  multiplication of %d and %d is %d\n", a, b, e);
    printf("the division of %d and %d is %d\n", a, b, f);
    return 0;
}