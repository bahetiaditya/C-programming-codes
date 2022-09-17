#include<stdio.h>
float contemp(float celcius);
float contemp1(float celcius);
int main()
{ float temp;
printf("enter the temperature in celcius :\n");
scanf("%f", &temp);
float far = contemp(temp);
printf("far is : %f\n", far);
float kelvin = contemp1(temp);
printf("kelvin is : %f\n", kelvin);
return 0 ;
    
}

float contemp(float celcius)
{
    float far = (celcius * 9/5) + 32;
    return far;

}
float contemp1(float celcius)
{
    float kelvin = celcius + 273.15;
    return kelvin;

}