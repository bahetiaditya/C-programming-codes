#include<stdio.h>

int main()
{
    int match = 21, compchoice, userchoice;
     while(match >= 1) {
    printf("Total number of matchsticks : %d ", match);
    printf("enter the choice of matchstick between 1 to 4 : ");
    scanf("%d", &userchoice);
    if(userchoice >  4) {
        printf("Enter the valid choice");
        break;
    }
    else{
        compchoice = 5 - userchoice;
        printf("computer picks the %d matchstick. \n", compchoice);
        match = match - compchoice - userchoice;
    if(match == 1){
        printf("\nyou have lost the game.\n");
        break;

    }
    }
    }
 return 0;
}