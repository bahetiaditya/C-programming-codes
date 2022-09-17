#include<stdio.h>
int main()
{
int s1,s2,s3,s4;
int avg;
printf("enter the marks of s1 : \n");
scanf("%d", &s1);
printf("enter the marks of s2 : \n");
scanf("%d", &s2);
printf("enter the marks of s3 : \n");
scanf("%d", &s3);
printf("enter the marks of s4 : \n");
scanf("%d", &s4);
int s = s1+s2+s3+s4;
avg = s/4;
if (avg <= 40) {
printf("you failed the exam !\n");
}
else
printf("you passed exam with score of %d\n",avg);
return 0;
}

