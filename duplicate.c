#include<stdio.h>
int search(int dup[],int element,int size){
int m=0,ch=-1;
for(m=0;m<size;m++){
if(dup[m]==element){
return m;
}
}
return ch;
}
void main()
{
int n,s,count=0,k=0,dup[10],dup_count[10],check;
printf("Enter No of Elements: ");
scanf("%d",&n);
int a[n];
printf("Enter Array Elements: ");
for(int i=0;i<n;i++)
{ 
 scanf("%d",&a[i]);
}
printf("Array \n");
for(int i=0;i<n;i++)
{ 
 printf("The element %d: %d\n",i,a[i]);
}
 for(int i=0;i<n;i++)
 { s=1;
 for(int j=i+1;j<n;j++)
 {
 if(a[j]==a[i])
 {
 s=s+1;
 }
 } 
 check= search(dup,a[i],k);
 if(check==-1 && s>1){
 dup[k]=a[i];
 dup_count[k] = s;
 k++;
 } 
 }
 printf("Duplicate Array\n");
 for(int i=0;i<k;i++)
{ 
 printf("The element %d : Repeated %d \n " , dup[i], dup_count[i]);
}
}