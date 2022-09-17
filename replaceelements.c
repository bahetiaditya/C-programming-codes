#include <stdio.h>
int main()
{
    int n, i;
    printf("enter the size of array : ");
    scanf("%d", &n);
    int arr[n];
    printf("enter the elements of array : \n");
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int key;
    printf("enter the index number which you want to replace : ");
    scanf("%d", &key);
    for (i = 1; i <= n; i++)
    {
        if (key == arr[i])
        {
            printf("enter the new number : ");
            scanf("%d", &arr[i]);

            break;
        }
    }
    for (i = 1; i <= n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");

    return 0;
}