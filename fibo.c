#include<stdio.h>
int main()
{
    int n;
    printf("enter the number of elements you want in series :");
    scanf("%d", &n);
    int fib[n];
    fib[0] = 0;
    fib[1] = 1;
    printf("%d  ", fib[0]);
 for(int i =2; i<n; i++){
    fib[i] = fib[i-1] + fib[i-2];
    
    printf("%d\t", fib[i]);
 }
 return 0;
}