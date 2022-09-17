#include<stdio.h>
float percentage(int math, int sans, int sci);
int main()
{ int maths, scie, sans ;

    printf("enter marks of maths:\n");
    scanf("%d", &maths);
     printf("enter marks of scie:\n");
    scanf("%d", &scie);
     printf("enter marks of sans:\n");
    scanf("%d", &sans);
    printf("percentage is :%f\n", percentage(maths, sans, scie) );
    return 0;

}
float percentage(int math, int sans, int sci ) {
    return ((sci + math + sans )/ 3) ;

}