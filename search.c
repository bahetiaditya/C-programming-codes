#include<stdio.h>
int main()
{
    printf("ADITYA SANJAYKUMAR BAHETI\n2021BIT002\n") ;
int n, i, r, arr[100];
printf("Enter the number of elements in the array: "); 
scanf("%d", &n);
printf("Enter the array elements: ");
for (i = 0; i < n; i++) { scanf("%d", &arr[i]);
}
printf("Enter the item to be searched: ");
scanf("%d", &r);
i = 0;
   while (i < n && r != arr[i]) {
      i++;
   }
   if (i < n) {
      printf("The element is found in the position = %d", i + 1);
   } else {
      printf("Element not found!");
   }
return 0;
}