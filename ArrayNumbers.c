#include <stdio.h>
int main()
{
    int arr[10];
    int i;
    printf("Program to read and print the elements of the array \n");
    for(i=0;i<10;i++){
        printf("element-%d :",i);
        scanf("%d",&arr[i]);
    }
    printf("Elements in the array are :");
    for (i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
}