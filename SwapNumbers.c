#include <stdio.h>
int main()
{
    int x,y;
    printf("enter any two number:");
    scanf("%d%d",&x,&y);
    int temp=x;
    x=y;
    y=temp;
    printf("numbers after swap is %d ,%d " ,x,y);
}