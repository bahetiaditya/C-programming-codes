#include<stdio.h>
int main()
{
    int count, overtime, working;
    float overtime_payment;
    for(count =1 ; count<=10; count++) {
        printf("enter the working hours of employee %d : ", count);
        scanf("%d", &working);
    
    if(working>40){
        working = working - 40;
        overtime_payment = working*12.00;
        printf("overtime payment of worker is : %.2f \n", overtime_payment);
    }
    else{
        printf("you have to work more than 40 hours\n");
    }
    }
    return 0;
}