#include <stdio.h>
#include <math.h>
int main()
{
    int orgnum,num,r,n,sum=0;
    n=printf("Enter the no of digits in a number:");
    scanf("%d",&n);
    num=printf("Enter the number:");
    scanf("%d",&num);
    orgnum=num;
    while(num>0)
    {
        r=num%10;
        sum=sum+pow(r,n);
        num=num/10;
    }
    if (orgnum==sum)
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");
}
