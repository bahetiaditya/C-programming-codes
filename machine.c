#include<stdio.h>
int main()
{
    int year=0, cost_of_machine, alternate_investment;

    while(alternate_investment>cost_of_machine)
    {
        year++; 
        alternate_investment = year * 120;

       
         cost_of_machine = (1000*year) - 4000;

    }

    printf("\nThe Life of Machine: %d years\n", year);
    printf("\n");
    return 0;

}