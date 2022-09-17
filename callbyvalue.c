#include<stdio.h>
void swap(int a, int b);
int main() {
    int x = 3;
    int y = 5;
    printf("number x and y before swap are %d and %d\n", x, y);
    swap(x,y);
    printf("number x and y after swap are %d and %d\n", x, y);
}

void swap(int a, int b)
{
    int t=a;
    a=b;
    b=t;
    
}