#include<stdio.h>
void sum(int n, int c, int m, int d, int first[10][10], int second[10][10]);
int main()
{
    int m, n, c, d, first[10][10], second[10][10];  
    printf("Enter the number of rows and columns of matrix\n");  
    scanf("%d %d", &m, &n);  
    printf("Enter the elements of first matrix\n");  
    for (c = 0; c < m; c++){  
        for (d = 0; d < n; d++) {
            scanf("%d", & first[c][d]);  }
    }
    printf("Enter the elements of second matrix\n");  
    for (c = 0; c < m; c++)  {
        for (d = 0; d < n; d++) {
            scanf("%d", & second[c][d]); 
    }
    }
   sum(n, c, m, d, first, second);
    return 0;

}   
void sum(int n,int c, int m, int d, int first[10][10], int second[10][10])
{ int sum[10][10];
    printf("Sum of entered matrices:-\n");  
    for (c = 0; c < m; c++)  
    {  
        for (d = 0; d < n; d++)  
        {  
            sum[c][d] = first[c][d] + second[c][d];  
            printf("%d\t", sum[c][d]);  
        }  
        printf("\n");
       
    }
} 