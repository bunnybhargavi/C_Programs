#include <stdio.h>
int PrimeNumber(num){
    int i; 
    for (i=2 ;i<=num/2 ;i++){
        if(num%2==0)
            return 0;
    }
    return 1;
}
int main()
{
    int num,res;
    printf("Enter any Number:");
    scanf("%d",&num);
    res=PrimeNumber(num);
    if(res==1)
        printf("%d is a Prime Number",num);
    else
        printf("%d is not a Prime Number",num);
}