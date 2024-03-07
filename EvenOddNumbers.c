#include <stdio.h>
int main()
{
    int num=printf("Enter any integer:");
    scanf("%d",&num);
    if (num%2==0)
    {
        printf("Given number is Even");
    }
    else
    {
        printf("Given number is Odd");
    }
}