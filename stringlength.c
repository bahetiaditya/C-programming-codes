#include<stdio.h>
void printstring(char arr[]);
int countstring(char arr[]);
int main()
{
    char name[100];
    fgets(name, 100, stdin);
    printf("length is %d\n", countstring(name));
    return 0;
}
int countstring(char arr[]) {
    int count = 0;
    for(int i=0; arr[i] !=0; i++) {
        count++;
    }
    return count-1;
}

void printstring(char arr[])
{
    for( int i=0; arr[i] != 0; i++) {
        printf("%c", arr[i]);

    }
    printf("\n");


}