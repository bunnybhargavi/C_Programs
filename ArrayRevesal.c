#include <stdio.h>
int main()
{
    int i ,n,a[100];
    n=printf("Enter the number of input elements:");
    scanf("%d",&n);
    for(i=0 ;i<n ; i++){
        printf("Enter the elements:");
        scanf("%d",&a[i]);
    }
    printf("The elements in array are: ");
    for(i=0;i<n ;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("reverse of an array is: ");
    for( i=n-1; i>=0; i--){
        printf("%d ",a[i]);
    }
}
