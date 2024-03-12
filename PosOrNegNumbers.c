#include <stdio.h>
int main()
{
    int num=printf("Enter any Number:");
    scanf("%d",&num);
    if (num>0)
        printf("Number is Positive");
    else if (num==0)
        printf("Number is Zero");
    else if (num<0)
        printf("Number is Negative");
}