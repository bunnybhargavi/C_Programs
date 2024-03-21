#include <stdio.h>
int recSum(int n)
{
    if (n<=1)
        return n;
    return n+recSum(n-1);
}
int main()
{
    int num=printf("Enter to calculate its sum:");
    scanf("%d",&num);
    printf("sum %d Natural numbers is %d",num,recSum(num));
}