#include<stdio.h>
struct student {
char name[100];
int roll;
float cgpa;
};
int main()
{ printf("ADITYA SANJAYKUMAR BAHETI\n2021BIT002\n");
struct student s[100];
    int i, n;
    printf("enter the number of students : ");
    scanf("%d", &n);
    for(i = 0; i<n; ++i) {
         s[i].roll = s[i].roll + 1;
        printf("roll number : %d\n", s[i].roll);
        printf("enter the name of student: ");
        scanf("%s", &s[i].name);
        printf("enter the marks of student : ");
        scanf("%f", &s[i].cgpa);
    }
    printf("\n\n");
    for(i=0; i<n; i++) {
        printf("name of student is : %s\n", s[i].name);
        printf("roll number is : %d\n", s[i].roll +1);
        printf("cgpa is : %f\n", s[i].cgpa);
    }
    return 0 ;
}