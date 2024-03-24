#include <stdio.h>
int main()
{
    int size, i, largest;
    printf("\n Enter the size of the array: ");
    scanf("%d", &size);
    int array[size];  
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++)
    {   
        scanf(" %d", &array[i]);
    }
    largest = array[0];
    for (i = 1; i < size; i++) 
    {
        if (array[i]>largest)
        largest = array[i];
    }
    printf("\n largest element present in the given array is : %d", largest);
    return 0;
 }