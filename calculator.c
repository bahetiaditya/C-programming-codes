#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a: \n");
    scanf("%d", &a);
    printf("Enter the value of b: \n");
    scanf("%d", &b);
    printf("Enter value of c:\n");
    scanf("%d", &c);
    switch (c)
    {
    case 1:
    printf("modulus of %d and %d is %d", a,b, a%b);
        break;
    case 2:
    printf("additiion of %d and %d is %d", a,b, a+b);
        break;
        case 3:
    printf("subtraction of %d and %d is %d", a,b, a-b);
        break;
        case 4:
    printf("multiplication of %d and %d is %d", a,b, a*b);
        break;
        case 5:
    printf("division of %d and %d is %d", a,b, a/b);
        break;    
    
    default:
    printf("enter valid choice\n");
        break;
    }
}