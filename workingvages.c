#include<stdio.h>
int main()
{
int count , working, overtime;
 float overtimepay;
 for(count = 1; count<=10; count++)
 {
 printf("Enter the working hours of employee no %d: ", count);
 scanf("%d", &working);

 if(working>40)
 {
 overtime = working - 40;
 overtimepay = overtime * 12.00;
 printf("Employee No %d overtime pay is %.2f\n", count, overtimepay);
 }
 else
 printf("You have to work for more than 40 hours to get over time pay\n");

 }
}