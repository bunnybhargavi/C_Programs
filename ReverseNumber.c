#include <stdio.h>
int main()
{
    int num=printf("Enter any Number:");
    scanf("%d",&num);
    int rev_num=0;
    while(num>0)
    {
        rev_num=rev_num*10+num%10;
        num=num/10;
    }
    printf("Revese Number of the given number is %d",rev_num);
}