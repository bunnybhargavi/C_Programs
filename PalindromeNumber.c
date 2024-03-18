#include <stdio.h>
int main()
{
    int num=printf("Enter any number:");
    scanf("%d",&num);
    int rev_num=0;
    int org_num=num;
    while(num>0){
        rev_num= rev_num *10 +num%10;
        num=num/10;
    }
    if(org_num==rev_num)
    {
        printf("The number you entered is PALINDROME");
    }
    else
    {
        printf("The number you enterd is NOT a Palindrome");
    }
}
