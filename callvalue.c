#include<stdio.h>
void swap(int a, int b);
int main()
{
int x= 20;
int y = 68;
printf("numbers before swap are %d and %d \n", x,y );
swap(x,y);
printf("numbers after swap are %d and %d \n", x , y );
return 0;
}

void swap(int a, int b) {
int t = a; 
a = b;
b = t ;
}

