#include<stdio.h>
int main()    
{   printf("ADITYA SANJAYKUMAR BAHETI\n 2021BIT002\n") ;
int n;
int i;
printf("enter the size of array : ");
scanf("%d", &n);   
    int arr[n];
    printf("enter the elements of array :\n");
    for(i = 0; i<n; i++) {
        scanf("%d", &arr[i]);
    }     
    int length = sizeof(arr)/sizeof(arr[0]);    
    
    printf("Original array: \n");    
    for (i = 0; i < length; i++) {     
        printf("%d ", arr[i]);     
    }      
        
    printf("\n");    
        
    printf("Array in reverse order: \n");   
    for (int i = length-1; i >= 0; i--) {     
        printf("%d ", arr[i]);     
    }     
    return 0;    
} 