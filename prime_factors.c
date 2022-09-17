#include<stdio.h>
int isPrime(int number) {
    int i, flag = 0;
    for(i = 2; i<=number; i++) {
        if(number%i == 0) {
            flag = 1;
        }
        for(int j =2; j<=i/2; j++) {
            if(i%j == 0) {
                flag = 0;
            }
            
        }
        if(flag == 1) {
            printf("%d   ", i);
        }
    }
}
int main()
{
    int i, number;
    printf("Enter the number : ");
    scanf("%d", &number);
    printf("Prime factors of %d is : ", number);
    isPrime(number);
   return 0;
}