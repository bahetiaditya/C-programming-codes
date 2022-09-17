#include<stdio.h>
int main()
{
    int year = 0 ;
    int cost, alternate ;

    while(alternate>cost)
    {
        year++;
        alternate = year*120;
        cost = (year*1000) - 4000;
    }
    printf("\n The lifetime of machine is : %d ", year);
    printf("\n");
    return 0;
}