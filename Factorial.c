#include <stdio.h>
int main()
{
    int i,fact=1,number;
    number=printf("Enter any number to find its factorial:");
    scanf("%d",&number);
    for (i=1 ; i<=number ; i++)
        fact=fact*i;
    printf("Factorial of a number %d is %d :",number,fact);
}