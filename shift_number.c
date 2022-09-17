#include<stdio.h>
void shiftright(int *x, int *y, int *z);
int main()
{
    int x=5, y=8, z=10;
     for(int i=0; i<3; i++) {
         printf("x=%d, y=%d, z=%d \n", x,y,z );
      shiftright(&x,&y,&z);
    }
   return 0;
}
void shiftright(int *x, int *y, int *z){
    int temp = *z;
    *z=*y;
    *y=*x;
    *x=temp;
   
}