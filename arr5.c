#include <stdio.h>
float calculateSum(float num[]);

int main() 
{
  float result, num[] = {23.4, 55, 22.6, 3, 40.5, 18};
  result = calculateSum(num); 
  printf("Result = %.2f", result);
  return 0;
}

float calculateSum(float num[])
{
  float sum = 0.0;

    for (int i = 0; i < 6; ++i) 
{
    sum += num[i];
}

  return sum;
} 