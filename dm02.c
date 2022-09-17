#include<stdio.h>
void main()
{
  int x[10],y[10],n;
  printf("Enter the length of the string\n");
  scanf("%d",&n);
  printf("Enter the required bits\n");
  for(int i=0;i<n;i++)
  {
  scanf("%d",&x[i]);
  }
  printf("Enter the required bits\n");
  for(int i=0;i<n;i++)
  {
   scanf("%d",&y[i]);
  }
  printf("AND\n");
  for(int i=0;i<n;i++)
  if(x[i]==1&&y[i]==1)
  {
   printf("1");
  }
  else
  {
   printf("0");
  }
  
  printf("\nOR\n");
  for(int i=0;i<n;i++)
  if(x[i]==0&&y[i]==0)
  {
   printf("0");
  }
  else
  {
   printf("1");
  }
  printf("\nXOR\n");
  for(int i=0;i<n;i++)
  if(x[i]==0&&y[i]==0)
  {
   printf("0");
  }
  else if (x[i]==1&&y[i]==1)
  {
    printf("0");
  }
  else
  {
   printf("1");
  }
}