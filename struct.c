#include<stdio.h>
#include<string.h>

struct student
{
    int roll;
    char name[100];
    float cgpa;

    /* data */
};
int main()
{
    struct student s1;
     s1.roll = 2001;
 
    s1.cgpa = 8.345;
    strcpy(s1.name, "aditya");

    

    printf("roll number os student is %d\n", s1.roll);
    printf("name of student is %s\n", s1.name);
    printf("cgpa of student is %f\n", s1.cgpa);

printf("\n");

    struct student s2;
     s2.roll = 2002;
   
    s2.cgpa = 9.585;
    strcpy(s2.name, "aryan");

    

    printf("roll number os student is %d\n", s2.roll);
    printf("name of student is %s\n", s2.name);
    printf("cgpa of student is %f\n", s2.cgpa);
printf("\n");

    struct student s3;
     s3.roll = 2003;
    
    s3.cgpa = 8.878;
    strcpy(s3.name, "sai");

    

    printf("roll number os student is %d\n", s3.roll);
    printf("name of student is %s\n", s3.name);
    printf("cgpa of student is %f\n", s3.cgpa);
   printf("\n");
   
    return 0;
    
   
}