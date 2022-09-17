#include<stdio.h>
int main()
{
   int n, i;
   int roll[100];
   float marks[100];
   char arr[100];
    printf("enter the number of students : ");
    scanf("%d", &n);
    for(i = 0; i<n; i++) {
    printf("enter the name of student : ");
    scanf("%s", arr);
    printf("enter the roll number :");
    scanf("%d", &roll[i]);
    printf("enter the marks of student : ");
    scanf("%f", &marks[i]);
  }
  for(i = 0; i<n ; ++i) 
  {
    printf("the name of student : %\ns", arr);
    printf("the roll number : %d\n", roll[i]);
    printf("the marks of student : %f\n", marks[i]); 
  }
  return 0;

}