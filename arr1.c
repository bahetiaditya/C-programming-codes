#include<stdio.h>
void search(int arr[100], int a, int n, int i);
int main()
{
    int arr[100] , a, n , i;
    printf("enter number of elements of array : ");
    scanf("%d", &n);
    printf("enter the elements of array : ");
    for(i = 0; i<n; i++) {
    scanf("%d", &arr[i]);
    }
    printf("enter the element to search : ");
    scanf("%d", &a);
    search(arr, a, n, i);
    return 0;
}
void search(int arr[100], int a, int n, int i) {
   int count = 0;
    for( i = 0; i<n; i++) {
        if(arr[i] == a) {
            printf("element found at %d\n", i+1);
            break;
            }
     count++;
      if(count == n) {
        printf("element not found\n");
     }       
    }
    
}