#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the number a: \n");
    scanf("%d", &a);
    printf("enter the number b: \n");
    scanf("%d", &b);
    printf("enter the number c: \n");
    scanf("%d", &c);

    switch(c)
    {

    
    case 1:
    printf("the addition of %d and %d is %d\n", a, b, c = a+b);
    break;
    case 2:
    printf("the subtraction of %d and %d is %d\n", a, b, c = a-b);
    break;
    case 3:
    printf("the addition of %d and %d is %d\n", a, b, c = a*b);
    break;
    case 4:
    printf("the division of %d and %d is %d\n", a, b, c = a/b);
    break;
    
    default:
    printf("enter valid choice\n");
    break;

    }
    return 0;
}