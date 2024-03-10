#include <stdio.h>
int main()
{
    float temp=printf("Enter temperature in Fahrenheit:");
    scanf("%f",&temp);
    float tempc=(temp - 32) * 5/9 ;
    printf("Temperature after converting to Celsius: %f",tempc);
}