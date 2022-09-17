#include <stdio.h>

void main()
{
    int num1, num2, gcd, remainder, numerator, denominator;
    int n, i;

    printf("Enter the size of array :\n");
    scanf("%d", &n);
    int arr[n];
    printf("enter the number of elements in array : \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 1; i <= n; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            numerator = arr[i];
            denominator = arr[i + 1];
        }
        else
        {
            numerator = arr[i + 1];
            denominator = arr[i];
        }
    }

    remainder = numerator % denominator;
    while (remainder != 0)
    {
        numerator = denominator;
        denominator = remainder;
        remainder = numerator % denominator;
    }
    gcd = denominator;
    printf("GCD of %d and %d = %d\n", num1, num2, gcd);
}