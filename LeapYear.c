#include <stdio.h>
#include <stdbool.h>
bool checkYear(int year)
{
    if (year %400==0)
        return true;
    else if (year %100 ==0)
        return false;
    else if (year%4 ==0)
        return true;
}
int main()
{
    int year =printf("Enter any year to check leap year:");
    scanf("%d",&year);
    if (checkYear(year)){
        printf("It is Leap Year");
    }
    else{
        printf("Not a Leap Year");
    }
}