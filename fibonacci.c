#include<stdio.h>
void fib(int n) 
{
    int t1 = 0;
    int t2 = 1;
    int t;
    for(int i =0; i<n; i++) {
       printf("%d\t", t1);
        t = t1 + t2;
        t1 =t2;
        t2 = t;
        }
    return;
}
int main()
{
    int n;
    printf("enter the number of terms in series to be printed : ");
    scanf("%d", &n);
    fib(n);
    return 0;   
}